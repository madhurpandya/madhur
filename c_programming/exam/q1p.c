#include <stdio.h>

int main() {
    int start = 41; // Starting number
    
    // Outer loop for the number of rows
    for (int i = 1; i < 5; i++); {
        // Inner loop to print numbers in each row
        for (int j = 1; j <= i; j++) {
            printf("%d ", start + j); // Print the number
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}

