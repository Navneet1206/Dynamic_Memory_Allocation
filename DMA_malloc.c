#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory for an integer
    int *ptr = (int*)malloc(sizeof(int));

    if (ptr != NULL) {
        // Assign a value to the dynamically allocated memory
        *ptr = 42;

        // Use the allocated memory
        printf("Dynamically allocated integer: %d\n", *ptr);

        // Release the allocated memory
        free(ptr);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
