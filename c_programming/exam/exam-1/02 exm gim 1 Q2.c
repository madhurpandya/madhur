#include <stdio.h>

int main() {
    // Declare and initialize two integer variables
    int a = 15;
    int b = 5;

    // Arithmetic operations
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    float quotient = (float)a / b; // Cast to float for accurate division

    // Display arithmetic results
    printf("Sum of a and b: %d\n", sum);
    printf("Difference of a and b: %d\n", difference);
    printf("Product of a and b: %d\n", product);
    printf("Quotient of a and b: %.2f\n", quotient);

    // Relational operations
    printf("a == b: %s\n", (a == b) ? "true" : "false");
    printf("a != b: %s\n", (a != b) ? "true" : "false");
    printf("a > b: %s\n", (a > b) ? "true" : "false");
    printf("a < b: %s\n", (a < b) ? "true" : "false");
    printf("a >= b: %s\n", (a >= b) ? "true" : "false");
    printf("a <= b: %s\n", (a <= b) ? "true" : "false");

    // Logical operations
    int bothPositive = (a > 0) && (b > 0);
    printf("Both a and b are positive: %s\n", bothPositive ? "true" : "false");

    return 0;
}

