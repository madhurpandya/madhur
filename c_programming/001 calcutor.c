#include <stdio.h>


int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int modulus(int a, int b);

int main() {
    int choice, num1, num2, result;
    float divResult;

    while (1) {
       
        printf("\nMenu:\n");
        printf("Press 1 for Addition (+)\n");
        printf("Press 2 for Subtraction (-)\n");
        printf("Press 3 for Multiplication (*)\n");
        printf("Press 4 for Division (/)\n");
        printf("Press 5 for Modulus (%%)\n");
        printf("Press 0 to Exit\n");

        
        printf("Enter your choice: ");
        scanf("%d", &choice);

        
        if (choice == 0) {
            printf("Exiting the program.\n");
            break;
        }

       
        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

    
        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Addition of %d and %d is %d\n", num1, num2, result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Subtraction of %d and %d is %d\n", num1, num2, result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Multiplication of %d and %d is %d\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0) {
                    divResult = divide(num1, num2);
                    printf("Division of %d and %d is %.2f\n", num1, num2, divResult);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                if (num2 != 0) {
                    result = modulus(num1, num2);
                    printf("Modulus of %d and %d is %d\n", num1, num2, result);
                } else {
                    printf("Error: Modulus by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}



int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float) a / b;
}

int modulus(int a, int b) {
    return a % b;
}

