#include <stdio.h>

int main() {
    int rows, columns, i, j, rowNum, colNum, rowSum = 0, colSum = 0;

    // Getting the size of the 2D array
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

    // Input row number for which to find sum
    printf("Enter row number: ");
    scanf("%d", &rowNum);

    // Print elements of the specified row and calculate its sum
    printf("Elements of row %d: ", rowNum);
    for (j = 0; j < columns; j++) {
        printf("%d ", array[rowNum][j]);
        rowSum += array[rowNum][j];
    }
    printf("\nThe sum of row %d: %d\n", rowNum, rowSum);

    // Input column number for which to find sum
    printf("Enter column number: ");
    scanf("%d", &colNum);

    // Print elements of the specified column and calculate its sum
    printf("Elements of column %d: ", colNum);
    for (i = 0; i < rows; i++) {
        printf("%d ", array[i][colNum]);
        colSum += array[i][colNum];
    }
    printf("\nThe sum of column %d: %d\n", colNum, colSum);

    return 0;
}

