#include <stdio.h>

// Function to calculate factorial using a while loop
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    while (n > 1) {
        result *= n;
        n--;
    }
    return result;
}

int main() {
    int choice;
    int number;
    
    // Print the first 10 natural numbers using a for loop
    printf("First 10 natural numbers:\n");
    for (int i = 1; i <= 10; i++){5
    
        printf("%d ", i);
    }
    printf("\n");

    // Calculate and print the factorial of a number provided by the user using a while loop
    printf("Enter a positive integer to calculate its factorial: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %llu\n", number, factorial(number));
    }

    // Display a menu repeatedly until the user chooses to exit using a do-while loop
    do {
        printf("\nMenu:\n");
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You chose Option 1.\n");
                break;
            case 2:
                printf("You chose Option 2.\n");
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 3.\n");
                break;
        }
    } while (choice != 3);

    return 0;
}

