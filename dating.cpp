// Created by: Vova M
// Created on: 2 November 2026
// Copyright 2026 Vova M
// This program checks if a user is eligible to date a grandchild
// based on their age using compound boolean operators.

#include <iostream>
#include <string>
#include <stdexcept>

// Constants for age boundaries
const int MIN_AGE = 25;
const int MAX_AGE = 40;

int main() {
    std::string ageString;

    // Get user input for age
    std::cout << "Enter your age: ";
    std::cin >> ageString;

    try {
        int age = std::stoi(ageString);

        // Check compound condition using logical AND (&&)
        if (age >= MIN_AGE && age <= MAX_AGE) {
            std::cout << "You can date their grandchild!" << std::endl;
        } else {
            std::cout << "You cannot date their grandchild." << std::endl;
        }
    } catch (const std::invalid_argument&) {
        std::cout << "Invalid input! Please enter a valid integer age."
                  << std::endl;
    } catch (const std::out_of_range&) {
        std::cout << "Age is out of range. Please enter a realistic age."
                  << std::endl;
    }

    return 0;
}
