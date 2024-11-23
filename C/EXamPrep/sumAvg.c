// C program to calculate Sum and Average of Array Elements

#include <stdio.h>

void calculateSumAndAverage(int arr[], int size){
    int sum = 0; // Initialize sum to 0

    // Calculate the sum of the elements
    for(int i = 0; i < size; i++){
        sum += arr[i]; // Add each element to sum
    }

    // Calculate the average
    double average = (double)sum / size; // Cast sum to double for accurate division

    // Display the results
    printf("Sum of the elements: %d\n", sum);
    printf("Average fo the elements: %.2f\n", average);
}

int main(){
    int size;

    // Prompt the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size]; // Declare the array the specified size

    // Input elements in the array
    printf("Enter %d integers:\n", size);
    for(int i = 0; i < size; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]); // Read each integer number
    }

    // Call the function to calculate sum and average
    calculateSumAndAverage(arr, size);

    return 0; // Indicate that the program ended successfully

}