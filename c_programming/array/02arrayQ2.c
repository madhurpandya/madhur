#include <stdio.h>

int main() {
    int rows, columns, i, j, largest;

    // Getting the size of the array
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &columns);

    int array[rows][columns];

    // Input the array elements
    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Initialize largest as the first element
    largest = array[0][0];

    // Find the largest element in the 2D array
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            if (array[i][j] > largest) {
                largest = array[i][j];
            }
        }
    }

    // Output the largest element
    printf("The largest element is: %d\n", largest);

    return 0;
}

