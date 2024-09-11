#include <stdio.h>

// Define constants
#define MAX_SCORE 100
#define PI 3.14159
#define E 2.718281828459045
#define GRADE 'A'

int main() {
    // Declare and initialize variables of different data types
    int integerValue = 10;
    float floatValue = 20.5f;
    double doubleValue = 30.555;
    char charValue = 'A';

    // Print the values and their data types
    printf("Value of integerValue: %d (int)\n", integerValue);
    printf("Value of floatValue: %.2f (float)\n", floatValue);
    printf("Value of doubleValue: %.5f (double)\n", doubleValue);
    printf("Value of charValue: %c (char)\n", charValue);

    // Demonstrate the use of constants
    printf("The maximum score is: %d\n", MAX_SCORE);
    printf("Value of PI: %.5f\n", PI);
    printf("Value of E: %.15f\n", E);
    printf("Grade: %c\n", GRADE);

    // Show the size of different data types
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu bytes\n", sizeof(char));

    return 0;
}

