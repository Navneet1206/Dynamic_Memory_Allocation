#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Get the number of elements from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for an array of integers
    int *arr;
    arr = (int*)malloc(n * sizeof(int));

    if (arr != NULL) {
        // Input values into the dynamically allocated array
        printf("Enter %d elements:\n", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        // Calculate the sum of elements
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }

        // Display the sum
        printf("Sum of the elements: %d\n", sum);

        // Release the dynamically allocated memory
        free(arr);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
