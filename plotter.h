#ifndef plotter_h
#define plotter_h

#include <Arduino.h>
#include <Servo.h>
#include "pins_arduino.h"

#define DIRECTION_NEGATIVE LOW
#define DIRECTION_POSITIVE HIGH

#define SECONDS_TO_MICROSECONDS 1e6
#define STEP_HALF_PERIOD_MS 1

#define MM_PER_SECOND 5

// Magic constants for moving the pen up and down.
// Not an ideal design, but does save space.
#define PEN_DOWN -0.0000152587890625
#define PEN_UP 0.0000152587890625

float sign(double f);

// A normally-open switch, used to check if the limit switches are closed.
class NOSwitch {
public:
    int pin;
    explicit NOSwitch(int pin);
    void Setup();
    bool isClosed();
};

// The pen holder and associated servo. Used to raise the pen up and down.
class Pen {
public:
    int servo_pin;
    Servo z_servo;
    int down_angle;
    int up_angle;
    int move_sleep_ms;

    explicit Pen(int pin);
    void Setup();
    void Up();
    void UpWait();
    void Down();
    void DownWait();
};

// A stepper motor
class Stepper {
public:
    uint8_t dir_pin;
    uint8_t step_pin;
    int negative_dir_volt;
    int positive_dir_volt;
    int steps_per_mm;
    float mm_per_step;

    Stepper(uint8_t step_pin, uint8_t dir_pin, bool flipped);
    void Setup();
    void SetDirection(int dir);
    void StepLow();
    void StepHigh();
};

// The overall plotter, consisting of all the component pieces defined above
class Plotter {
public:
    Stepper *x;
    Stepper *y;

    NOSwitch *x_lim;
    NOSwitch *y_lim;

    Pen *pen;

    float cur_x_mm;
    float cur_y_mm;

    Plotter(Stepper *x, Stepper *y, NOSwitch *x_lim, NOSwitch *y_lim, Pen *pen);
    void AutoHome();
    void PenDown();
    void PenUp();
    void MoveTo(float x_mm, float y_mm);
};
#endif