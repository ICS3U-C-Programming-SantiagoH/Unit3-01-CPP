// Copyright (c) 2023 Santiago Hewett All rights reserved.
//
// Created by: Santiago Hewett
// Date: Oct 11, 2023
// This program asks the user for the subtotal
// of a item and displays
// the subtotal, tax and total of tha item.

#include <iostream>
// Include this for std::setprecision
#include <cmath>
#include <iomanip>

int main() {
    // declare variables
    float subtotal;
    float tax;
    float total;

    // declare constants
    const float HST = 0.15;

    // get the diameter in inches from the user and display message
    std::cout << "This program will calculate the subtotal, ";
    std::cout << "tax and total of your item ";
    std::cout << "with the subtotal of your item. ";
    std::cout << "Enter the subtotal : ";
    std::cin >> subtotal;

    // calculate the tax
    tax = subtotal * HST;

    // calculate the total
    total = subtotal + tax;

    // display the subtotal to the user
    std::cout << "\n";
    std::cout << "The subtotal of the item is ";
    std::cout << "Subtotal = " << std::fixed << std::setprecision(2)
              << "$" << subtotal << std::endl;

    // display the tax to the user
    std::cout << "\n";
    std::cout << "The tax of the item is ";
    std::cout << "Tax = " << std::fixed << std::setprecision(2)
              << "$" << tax << std::endl;

    // display the total to the user
    std::cout << "\n";
    std::cout << "The total of the item is ";
    std::cout << "Total = " << std::fixed << std::setprecision(2)
              << "$" << total << std::endl;
}
