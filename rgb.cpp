// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: November 2019
// This program calculates all RGB numbers


#include <iostream>

int main() {
    int red;
    int green;
    int blue;

    for (red = 0; red < 256; red++) {
        for (green = 0; green < 256; green++) {
            for (blue = 0; blue < 256; blue++) {
                std::cout << "RGB ( " << red << ", " << green
                          << ", "
                          << blue << ")" << std::endl;
            }
    }
}
}
