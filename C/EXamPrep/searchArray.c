// C Program for searching an Element in an Array

#include <stdio.h>

// Function Declaration and Definition; Function to search for a value in an array
int searchValue(int arr[], int size, int value){
    for (int i = 0; i < size; i++) {
        if (arr[i] == value){
            return i; // Returning the index if the value is found
        }
    }
    return -1; // Return -1 if the value is not found
}

int main(){
    int size;

    // Prompt the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size]; // Declare the array with the specified size

    // Input elements in the array
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]); // Read each integer number
    }

    int value;
    // Prompt the user for the value to search
    printf("Enter the value to search for: ");
    scanf("%d", &value);

    // Calle the search funtion
    int index = searchValue(arr, size, value);

    // Display the result
    if (index >= 0){
        printf("Value %d found at index %d.\n", value, index);
    } else{
        printf("value %d not found in the array. \n", value);
        
    }

    return 0; // Indicate that the program ended successfully
}



