#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory for an array of 3 integers
    int *arr = (int*)malloc(3 * sizeof(int));

    if (arr != NULL) {
        // Assign values to the dynamically allocated array
        for (int i = 0; i < 3; i++) {
            arr[i] = i * 5;
        }

        // Use the allocated array
        for (int i = 0; i < 3; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        // Resize the dynamically allocated array to hold 5 integers
        arr = (int*)realloc(arr, 5 * sizeof(int));

        // Assign additional values to the resized array
        for (int i = 3; i < 5; i++) {
            arr[i] = i * 5;
        }

        // Use the resized array
        for (int i = 0; i < 5; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        // Release the resized array
        free(arr);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
