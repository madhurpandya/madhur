#include <stdio.h>

#define FORMAT_STRING "%d x %d = %d"
#define SEPARATOR "   "

int main() {
    int n;

    // Prompt the user to enter the size of the table
    printf("Enter the size of the table: ");
    scanf("%d", &n);

    // Check if n is positive
    if (n <= 0) {
        printf("The size of the table must be a positive integer.\n");
        return 1; // Exit with an error code
    }

    // Print the multiplication table
    printf("Multiplication Table:\n");

    // Loop through numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print each entry in the format "i x j = result"
            printf(FORMAT_STRING, i, j, i * j);
            
            // Add spacing for readability; Adjust as needed
            if (j < n) {
                printf(SEPARATOR);
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}


