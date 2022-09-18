// This file contains the core logic for the plotter. It handles
// moving the stepper motors, moving the servo, and reading from
// the limit switches on each axis.

#include <Arduino.h>
#include "plotter.h"
#include "pins_arduino.h"

float sign(double f) {
    if (f == 0) {
        return 0;
    }
    if (f < 0) {
        return -1;
    }
    return 1;
}

Pen::Pen(int pin) {
    this->down_angle = 90;
    this->up_angle = 40;
    this->move_sleep_ms = 250;
    this->servo_pin = pin;
}

void Pen::Setup() {
    this->z_servo.write(this->up_angle);
    this->z_servo.attach(this->servo_pin);
}

void Pen::Up() {
    this->z_servo.write(this->up_angle);
}

void Pen::UpWait() {
    this->z_servo.write(this->up_angle);
    delay(this->move_sleep_ms);
}

void Pen::Down() {
    this->z_servo.write(this->down_angle);
}

void Pen::DownWait() {
    this->z_servo.write(this->down_angle);
    delay(this->move_sleep_ms);
}

Stepper::Stepper(uint8_t step_pin, uint8_t dir_pin, bool flipped) {
    this->dir_pin = dir_pin;
    this->step_pin = step_pin;
    this->steps_per_mm = 50;
    this->mm_per_step = 1.0f/(float)steps_per_mm;

    if (flipped) {
        this->negative_dir_volt = HIGH;
        this->positive_dir_volt = LOW;
    } else {
        this->negative_dir_volt = LOW;
        this->positive_dir_volt = HIGH;
    }
}

void Stepper::Setup() {
    pinMode(this->step_pin, OUTPUT);
    pinMode(this->dir_pin, OUTPUT);
}

void Stepper::SetDirection(int dir) {
    int dir_voltage = dir == DIRECTION_POSITIVE ? this->positive_dir_volt : this->negative_dir_volt;
    digitalWrite(this->dir_pin, dir_voltage);
}

void Stepper::StepLow() {
    digitalWrite(this->step_pin, LOW);
}

void Stepper::StepHigh() {
    digitalWrite(this->step_pin, HIGH);
}

Plotter::Plotter(Stepper* x, Stepper* y, NOSwitch* x_lim, NOSwitch* y_lim, Pen* pen) {
    this->x = x;
    this->y = y;

    this->x_lim = x_lim;
    this->y_lim = y_lim;

    this->pen = pen;
    this->cur_x_mm = 0.;
    this->cur_y_mm = 0.;
}

void Plotter::PenDown() {
    this->pen->DownWait();
}

void Plotter::PenUp() {
    this->pen->UpWait();
}

// MoveTo moves the pen to the desired position in a constant velocity straight-line path
void Plotter::MoveTo(float x_mm, float y_mm) {
    double dx = x_mm - cur_x_mm;
    double dy = y_mm - cur_y_mm;

    double dx_abs = fabs(dx);
    double dy_abs = fabs(dy);

    // Set the direction pins
    x->SetDirection(dx > 0 ? DIRECTION_POSITIVE : DIRECTION_NEGATIVE);
    y->SetDirection(dy > 0 ? DIRECTION_POSITIVE : DIRECTION_NEGATIVE);

    // Figure out how much time is needed for this movement
    double distance = sqrt(dx*dx + dy*dy);
    double expected_micros = (distance / MM_PER_SECOND) * SECONDS_TO_MICROSECONDS;
    if (expected_micros <= 0) {
        expected_micros = 1;
    }

    unsigned int completed_x_steps = 0;
    unsigned int completed_y_steps = 0;

    // Figure out the best approximation of the number of steps to take
    unsigned int total_x_steps = lroundf(dx_abs*x->steps_per_mm);
    unsigned int total_y_steps = lroundf(dy_abs*y->steps_per_mm);

    x->StepLow();
    y->StepLow();

    unsigned long usec_start = micros();
    delay(STEP_HALF_PERIOD_MS);

    // Continue until both steppers have taken exactly the correct amount of steps
    while (completed_x_steps < total_x_steps || completed_y_steps < total_y_steps) {
        // Linear interpolation along the path given the configured speed
        double t = ((double)micros() - (double)usec_start) / expected_micros;
        double expected_x_steps = t * dx_abs * x->steps_per_mm;
        double expected_y_steps = t * dy_abs * y->steps_per_mm;

        // If the expected number of steps is less than the completed steps: take a step
        bool should_step_x = (lroundf(expected_x_steps) > completed_x_steps) && (completed_x_steps < total_x_steps);
        bool should_step_y = (lroundf(expected_y_steps) > completed_y_steps) && (completed_y_steps < total_y_steps);

        if (should_step_x) {
            x->StepHigh();
        }
        if (should_step_y) {
            y->StepHigh();
        }
        if (should_step_x) {
            x->StepLow();
            completed_x_steps += 1;
        }
        if (should_step_y) {
            y->StepLow();
            completed_y_steps += 1;
        }
    }

    // Update the position based on the actual number of steps completed
    this->cur_x_mm += sign(dx) * (float)completed_x_steps * x->mm_per_step;
    this->cur_y_mm += sign(dy) * (float)completed_y_steps * y->mm_per_step;
    delay(5);
}

// AutoHome moves the pen to the (0, 0) position determined by the limit switches
void Plotter::AutoHome() {
    this->PenUp();

    float push_away_dist = 5;
    float big_step_dist = 0.2;
    float small_step_dist = 0.02;

    // If it's already touching the switch, move it away from the switch
    if (this->x_lim->isClosed()) {
        this->MoveTo(this->cur_x_mm + push_away_dist, this->cur_y_mm);
    }
    delay(100);

    // Move it towards the switch until it hits the switch
    while (!this->x_lim->isClosed()) {
        this->MoveTo(this->cur_x_mm - big_step_dist, this->cur_y_mm);
    }

    // Slowly move away from the switch until it's depressed
    while(this->x_lim->isClosed()) {
        this->MoveTo(this->cur_x_mm + small_step_dist, this->cur_y_mm);
        delay(5);
    }

    // Then the process described above repeats for the y axis
    if (this->y_lim->isClosed()) {
        this->MoveTo(this->cur_x_mm, this->cur_y_mm + push_away_dist);
    }
    delay(100);

    while (!this->y_lim->isClosed()) {
        this->MoveTo(this->cur_x_mm, this->cur_y_mm - big_step_dist);
    }
    while (this->y_lim->isClosed()) {
        this->MoveTo(this->cur_x_mm, this->cur_y_mm + small_step_dist);
        delay(5);
    }

    // This position is defined to be (0, 0) by convention
    this->cur_x_mm = 0.0;
    this->cur_y_mm = 0.0;
}

void NOSwitch::Setup() {
    pinMode(this->pin, INPUT_PULLUP);
}

bool NOSwitch::isClosed() {
    // A normally open switch connected to ground is closed if the pin reads low
    return digitalRead(this->pin) == LOW;
}

NOSwitch::NOSwitch(int pin) {
    this->pin = pin;
}