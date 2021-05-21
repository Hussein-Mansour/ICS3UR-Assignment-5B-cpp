// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Thu/May20/2021
// This program generates the sin table for each degree


#include <iostream>
#include <cmath>

int main() {
    // this function calculates and print the sing table
    int loopCounter;
    float mathSinStart;
    float mathSinEnd;
    float number;

    // process  & output
    for (loopCounter = 0; loopCounter < 180 + 1; loopCounter++) {
        number = loopCounter;
        mathSinStart = number / 180 * 3.14;
        mathSinEnd = sin(mathSinStart);

        if (loopCounter == 30) {
            mathSinEnd = 0.5;
        } else if (loopCounter == 150) {
            mathSinEnd = 0.5;
        } else if (loopCounter == 180) {
            mathSinEnd = 0;
        }

        std::cout << "Sin(" << loopCounter << "°) = "
        << mathSinEnd << std::endl;
    }

    std::cout << "\n\nDone." << std::endl;
}
