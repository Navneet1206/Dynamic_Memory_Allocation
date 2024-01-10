#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Allocate memory for a string
    char *str = (char*)malloc(20 * sizeof(char));

    if (str != NULL) {
        // Copy a string into the dynamically allocated memory
        strcpy(str, "Dynamic Memory");

        // Use the allocated string
        printf("Dynamically allocated string: %s\n", str);

        // Release the allocated memory
        free(str);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
