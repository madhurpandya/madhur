#include <stdio.h>

int main() {
    int i, num, choice;

    // 1. Use a for loop to print the first 10 natural numbers
    printf("First 10 natural numbers: ");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // 2. Use a while loop to calculate and print the factorial of a number provided by the user
    printf("\nEnter a number to calculate factorial: ");
    scanf("%d", &num);
    
    int factorial = 1, temp = num;
    while (temp > 0) {
        factorial *= temp;
        temp--;
    }
    
    printf("Factorial of %d is %d\n", num, factorial);

    // 3. Use a do-while loop to print a menu repeatedly until the user chooses to exit
    do {
        printf("\nMenu:\n");
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You selected Option 1.\n");
                break;
            case 2:
                printf("You selected Option 2.\n");
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice, please choose again.\n");
        }
    } while (choice != 3);

    return 0;
}


//summary 

/*
	The C program prints the first 10 natural numbers using a for loop, calculates and displays 
	the factorial of a user-provided number with a while loop, and repeatedly shows a menu with 
	a do-while loop until the user chooses to exit.
*/
