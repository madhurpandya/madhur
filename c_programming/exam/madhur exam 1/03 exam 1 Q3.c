#include <stdio.h>

 main() {
    int num;

    // Prompt the user to enter an integer
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is positive, negative, or zero using if-else
    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    // Prompt the user to enter a number for the day of the week
    printf("\nEnter a number (1-7): ");
    scanf("%d", &num);

    // Use a switch statement to display the corresponding day of the week
    switch (num) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    
}

//summary 

/*
	=> The C program prompts the user to enter an integer, checks if it's positive, negative, or zero using 
	an if-else statement, and then uses a switch statement to display the corresponding day of the week 
	based on a number entered (1-7).
    => It handles invalid inputs for days as well.
*/
