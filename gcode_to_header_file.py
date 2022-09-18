"""
This script is used to convert G-code designed for a laser engraver into a
header file with a huge array of floats that can be compiled into the
program that will run on the Arduino. There is code in main.cpp that
knows how to read these arrays.
"""

import os.path
import numpy as np
import matplotlib.pyplot as plt


def parse_coordinates(line):
    components = line.rstrip().split(" ")
    vals = {
        "X": None,
        "Y": None,
    }

    for component in components:
        letter = component[0]
        val = float(component[1:])
        if letter in "XY":
            vals[letter] = val

    return vals["X"], vals["Y"]


def arrify(nums):
    num_strs = ["{:.4}".format(n) for n in nums]
    comma_sep = "{" + ",".join(num_strs) + "}"
    return comma_sep


def pen_down():
    return "PEN_DOWN,\nPEN_DOWN,"


def pen_up():
    return "PEN_UP,\nPEN_UP,"


def move_to(x, y):
    return "{:.4f},\n{:.4f},".format(x, y)


def main():
    xs = []
    ys = []

    path = r"../../Desktop/pen_gcode/tiger.gcode"
    with open(path) as f:
        lines = f.readlines()

    name = os.path.basename(path).replace(".", "_")
    output_strings = [
        '#include "plotter.h"',
        f'const float {name}[] PROGMEM = {{'
    ]

    x, y = 0, 0
    for line in lines:
        pieces = line.strip().split(" ")
        command = pieces[0]
        if command == "G00":
            x, y = parse_coordinates(line)
            if x is None and y is None:
                continue

            xs.append(x)
            ys.append(y)

            output_strings.append(pen_up())
            output_strings.append(move_to(x, y))
        elif command == "S100":
            output_strings.append(pen_down())
        elif command == "G01":
            x2, y2 = parse_coordinates(line)
            if x2 is None and y2 is None:
                continue
            if x2 is None:
                x2 = x
            if y2 is None:
                y2 = y
            xs.append(x2)
            ys.append(y2)
            x, y = x2, y2
            output_strings.append(move_to(x, y))

    output_strings.append("};")

    xs = np.array(xs)
    ys = np.array(ys)

    with open(f"{name}.h", "w") as f:
        f.write("\n".join(output_strings))

    plt.plot(xs, ys)
    plt.show()


if __name__ == "__main__":
    main()
