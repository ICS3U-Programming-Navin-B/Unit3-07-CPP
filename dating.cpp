// Copyright (c) 2022 Navin Baleko HS All rights reserved.
//
// Created by: Navin Balekomebole
// Created on: Oct 2022
// This program uses a compound boolean statement

#include <iostream>

main() {
    // this function uses a compound boolean statement
    std::string integer_as_string;
    int age;

    // input
    std::cout << "Enter your age: ";
    std::cin >> age;


    // process & output
    if (age >= 25 && age <= 40) {
        std::cout << "You can date my grandchild :)";
    } else {
        std::cout << "You can not date my grandchild";
    } 
}