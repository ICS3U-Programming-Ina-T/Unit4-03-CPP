// Copyright (c) Ina Tolo All rights reserved.
//
// Created by: Ina Tolo
// Date: Jan. 10, 2022
// This program asks the user to enter a whole number.
// It then uses a for loop to determine the calculate
// the power of two from zero until the entered number.
#include <iostream>
#include <cmath>

int main() {
  // initialize the loop counter and sum
  int counter = 0;
  int powerOfTwo = 0;
  int userNumInt;
  std::string userNumString;

  // get the user number as a string
  std::cout << "Enter a whole number: ";
  std::cin >> userNumString;
  std::cout << std::endl;

  try {
      // convert the user's guess to an int
      userNumInt = std::stoi(userNumString);

      if (userNumInt >= 0) {
          // calculate the sum of all numbers from 0 to user number
          for (counter = 0; counter <= userNumInt; counter++) {
              powerOfTwo = pow(counter, 2);
              std::cout << counter << "^2 = " << powerOfTwo << "\n";
          }
      } else {
          std::cout << "Please enter a whole number!";
        }
    // determines if the the answer is a number
  } catch (std::invalid_argument) {
    // The user did not enter a number.
    std::cout << userNumString << " is not a number.\n";
    }
}

