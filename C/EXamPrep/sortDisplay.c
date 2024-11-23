// Create a function that takes an array as parameters and sort the array in accending order then display the array.
#include <stdio.h>

#define MAX_SIZE 100 // Define a constant for the maximum size of the array

// Step 1: Function Declarations
void sortArray(int arr[], int size);
void displayArray(int arr[], int size);

// Step 2: Function to Sort the Array
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Step 3: Function to Display the Array
void displayArray(int arr[], int size) {
    printf("Sorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Print each element
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

    // Step 4: Sort the array
    sortArray(numbers, size);

    // Step 5: Display the sorted array
    displayArray(numbers, size);
    
    return 0; // Indicate that the program ended successfully
}