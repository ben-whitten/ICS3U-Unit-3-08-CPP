// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: October 2019
// This is a program which tells you if a year is a leap year.

#include <iostream>
#include <cstdlib>

int main() {
    // This is what tells you if the year is a leap year.
    std::string yearAsString;
    int yearNumber;

    // Process
    while (true) {
        std::cout << "Input year number: ";
        std::cin >> yearAsString;
        std::cout << "" << std::endl;

        try {
            yearNumber = std::stoi(yearAsString);

            if (yearNumber >= 0) {
                if (yearNumber % 4 == 0 && yearNumber % 100 !=0) {
                    // Output
                    std::cout << "That year is a leap year." << std::endl;
                    break;
                } else if (yearNumber % 1000 == 0) {
                    // Output
                    std::cout << "That year is a leap year." << std::endl;
                    break;
                } else {
                    // Output
                    std::cout << "That year is not a leap year." << std::endl;
                    break;
                }
            } else {
                std::cout << "Invalid year." << std::endl;
            }
        } catch (std::invalid_argument) {
        std::cout << "Invalid year." << std::endl;
        }
    }
}
