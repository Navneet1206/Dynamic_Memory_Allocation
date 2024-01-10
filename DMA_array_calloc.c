#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory for an array of 5 integers
    int *arr;
    arr = (int*)calloc(5, sizeof(int));

    if (arr != NULL) {
        // Assign values to the dynamically allocated array
        for (int i = 0; i < 5; i++) {
            arr[i] = i * 10;
        }

        // Use the allocated array
        for (int i = 0; i < 5; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        // Release the allocated array
        free(arr);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
