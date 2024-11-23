// Function that takes an array and display the element in a reverse manner
#include <stdio.h>

#define MAX_SIZE 100 // Define a constant for the maximum size of the array

// Step 1: Function Declaration
void displayReverse(int arr[], int size);

// Step 2: Function Definition
void displayReverse(int arr[], int size) {
    printf("Elements in reverse order:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]); // Print each element from last to first
    }
    printf("\n"); // New line for better readability
}

int main() {
    int numbers[MAX_SIZE]; // Array to hold the integers
    int size; // Variable to hold the actual number of elements entered

    // Prompt the user for the number of elements
    printf("Enter the number of elements (up to %d): ", MAX_SIZE);
    scanf("%d", &size);

    // Validate the input size
    if (size < 1 || size > MAX_SIZE) {
        printf("Invalid size. Please enter a number between 1 and %d.\n", MAX_SIZE);
        return 1; // Exit the program with an error code
    }

    // Prompt the user to enter the integer numbers
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]); // Read each integer number
    }

    // Step 3: Function Call
    displayReverse(numbers, size);
    
    return 0; // Indicate that the program ended successfully
}