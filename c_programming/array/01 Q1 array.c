#include <stdio.h>

int main() {
    int o, i;

    // Getting the size of the array
    printf("Enter the array's size: ");
    scanf("%d", &o);

    int array[o];

    // Input the array elements
    printf("Enter array's elements:\n");
    for (i = 0; i <o; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }

    // Output the negative elements
    printf("Negative elements from an array: ");
    for (i = 0; i < o; i++) {
        if (array[i] < 0) {
            printf("%d ", array[i]);
        }
    }

    return 0;
}

