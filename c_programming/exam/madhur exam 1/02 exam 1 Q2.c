#include <stdio.h>

main() {
    // Declare and initialize variables
    int a = 10;
    int b = 5;

    // Arithmetic operations
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;

    // Display results of arithmetic operations
    printf("sum: %d\n", sum);
    printf("difference: %d\n", difference);
    printf("product: %d\n", product);
    printf("quotient: %d\n", quotient);

    // Relational operators
    int isagreaterthanB = a > b;
    int isalessthanB = a < b;

    // Display results of relational operations
    printf("a > b: %d (true)\n", isagreaterthanB); // Will print 1 if true, 0 if false
    printf("a < b: %d (false)\n", isalessthanB);    // Will print 1 if true, 0 if false

    // Logical operators
    int bothpositive = (a > 0) && (b > 0);

    // Display results of logical operation
    printf("Both a and b are positive: %d (true)\n", bothpositive); // Will print 1 if true, 0 if false

    
}

//summary 

/*
   => The C program declares two integer variables, performs arithmetic operations 
	(sum, difference, product, quotient), compares the variables using relational operators, 
	and checks if both are positive using logical operators.
   => It displays the results of all operations.
*/
