// This file reads the G-code and tells the plotter how to move in
// order to create the desired drawing.

#include <Arduino.h>
#include "plotter.h"
#include "tiger_gcode.h"
#include "cat_gcode.h"
#include "font_test_gcode.h"

NOSwitch y_lim(2); // Normally-open limit switch for Y axis
NOSwitch x_lim(3); // Normally-open limit switch for X axis
Stepper x(4, 5, true); // X axis stepper motor
Stepper y(6, 7, true); // Y axis stepper motor
Pen p(8); // Pen servo
Plotter plotter(&x, &y, &x_lim, &y_lim, &p);

void setup() {
    Serial.begin(9600);
    delay(4000);
    p.Setup();
    x.Setup();
    y.Setup();
    x_lim.Setup();
    y_lim.Setup();
    delay(1000);
    p.Up();
}

void infinite_sleep() {
    p.UpWait();
    for (;;) {
        delay(1000000);
    }
}

void loop() {
    infinite_sleep();
    plotter.AutoHome();
    unsigned int num_points = (sizeof tiger_gcode) / (sizeof tiger_gcode[0]);
    for (unsigned int i = 0; i < num_points; i+=2) {
        float x_pos = pgm_read_float(&(tiger_gcode[i]));
        float y_pos = pgm_read_float(&(tiger_gcode[i+1]));

        if (x_pos == PEN_UP && y_pos == PEN_UP) {
            plotter.PenUp();
        }
        else if (x_pos == PEN_DOWN && y_pos == PEN_DOWN) {
            plotter.PenDown();
        }
        else {
            plotter.MoveTo(x_pos, y_pos);
        }
    }
    infinite_sleep();
}
