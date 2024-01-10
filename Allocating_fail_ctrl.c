#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory for an array of 1000 integers
    int *arr;
    arr = (int*)malloc(1000 * sizeof(int));

    if (arr != NULL) {
        // Use the allocated array
        printf("Memory allocation successful.\n");

        // Release the allocated array
        free(arr);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
