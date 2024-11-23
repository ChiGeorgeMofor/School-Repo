// Function that takes array of doubles and returns the largest.
#include <stdio.h>

#define MAX_SIZE 100 // Define a constant for the maximum size of the array

// Step 1: Function Declaration
double findLargest(double arr[], int size);

// Step 2: Function Definition
double findLargest(double arr[], int size) {
    double largest = arr[0]; // Start with the first element as the largest
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest if the current element is larger
        }
    }
    return largest; // Return the largest value found
}

int main() {
    double numbers[MAX_SIZE]; // Array to hold the double numbers
    int size; // Variable to hold the actual number of elements entered

    // Prompt the user for the number of elements
    printf("Enter the number of elements (up to %d): ", MAX_SIZE);
    scanf("%d", &size);

    // Validate the input size
    if (size < 1 || size > MAX_SIZE) {
        printf("Invalid size. Please enter a number between 1 and %d.\n", MAX_SIZE);
        return 1; // Exit the program with an error code
    }

    // Prompt the user to enter the double numbers
    printf("Enter %d double numbers:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Number %d: ", i + 1);
        scanf("%lf", &numbers[i]); // Read each double number
    }

    // Step 3: Function Call
    double largest = findLargest(numbers, size);
    
    // Print the largest number
    printf("The largest number is: %.2f\n", largest);
    
    return 0; // Indicate that the program ended successfully
}