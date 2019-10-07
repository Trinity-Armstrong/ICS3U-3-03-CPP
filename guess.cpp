// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: October 2019
// This program runs the "Number Guessing Game"

#include <iostream>

int main() {
    // This function runs the "Number Guessing Game"

    // Random number seed
    unsigned int seed = time(NULL);

    // variables
    int random_number = rand_r(&seed) % 10;
    int user_guess;

    // Input
    std::cout << "Guess a number between 0 and 9 (integer): " << std::endl;
    std::cin >> user_guess;
    std::cout << "" << std::endl;

    // Process
    if (user_guess == random_number) {
        std::cout << "You are correct!!! " << std::endl;
    } else {
          std::cout << "Sorry, try again :) " << std::endl;
          std::cout << "The number is: " << random_number << std::endl;
    }
}
