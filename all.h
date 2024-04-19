#include <stdio.h>
#include <stdlib.h>

// Function to perform addition
double add(double x, double y) {
    return x + y;
}

// Function to perform subtraction
double subtract(double x, double y) {
    return x - y;
}

// Function to perform multiplication
double multiply(double x, double y) {
    return x * y;
}

// Function to perform division
double divide(double x, double y) {
    if (y == 0) {
        printf("Error: Division by zero!\n");
        exit(1); // Exit the program if division by zero occurs
    }
    return x / y;
}