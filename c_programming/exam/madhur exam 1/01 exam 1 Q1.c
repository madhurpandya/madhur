#include <stdio.h>

 main() {
    // Variable declarations and initializations
    int integervar = 10;
    float floatvar = 20.5f;
    double doublevar = 30.555;
    char charvar = 'A';

    // Constants
    const int const_int = 50;
    const float const_float = 100.75f;

    // Printing variable values
    printf("Integer: %d\n", integervar);
    printf("Float: %.2f\n", floatvar);
    printf("Double: %.3lf\n", doublevar);
    printf("Character: %c\n", charvar);

    // Using constants in expressions
    int result = integervar + const_int;
    float floatresult = floatvar + const_float;
    
    printf("Result using constant integer: %d\n", result);
    printf("Result using constant float: %.2f\n", floatresult);

    // Printing sizes of data types
    printf("Size of int: %zu bytes\n", sizeof(integervar));
    printf("Size of float: %zu bytes\n", sizeof(floatvar));
    printf("Size of double: %zu bytes\n", sizeof(doublevar));
    printf("Size of char: %zu bytes\n", sizeof(charvar));

    
}

//summary 

/* 
	The C program declares variables of different data types (int, float, double, char), 
	prints their values, demonstrates the use of constants in expressions, and displays the memory 
	size of each data type using sizeof().
*/
