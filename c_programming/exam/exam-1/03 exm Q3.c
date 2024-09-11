#include <stdio.h>

int main() {
    int number;
    
    // Prompt the user to enter an integer value
    printf("Enter an integer: ");
    scanf("%d", &number);

    // If-else statement to check if the number is positive, negative, or zero
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    // Prompt the user to enter a number between 1 and 7 for days of the week
    int day;
    printf("Enter a number between 1 and 7 to get the corresponding day of the week: ");
    scanf("%d", &day);

    // Switch statement to display the day of the week
    switch (day) {
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
            printf("Invalid input. Please enter a number between 1 and 7.\n");
            break;
    }

    return 0;
}

