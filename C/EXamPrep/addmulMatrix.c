/** Write a program that adds two matrices, multiplies two matrices, 
the dimension should be decided by the user and the matrix elements should be netered by the user ***/

#include <stdio.h>

// Function to input a matrix
void inputMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int mat1[][10], int mat2[][10], int result[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[][10], int mat2[][10], int result[][10], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0; // Initialize the result element
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j]; // Accumulate the product
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;

    // Input dimensions for the first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    
    // Input dimensions for the second matrix
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if addition is possible
    if (r1 != r2 || c1 != c2) {
        printf("Addition not possible! Matrices must have the same dimensions.\n");
        return 1;
    }

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Multiplication not possible! The number of columns of the first matrix must equal the number of rows of the second matrix.\n");
        return 1;
    }

    int mat1[10][10], mat2[10][10], sum[10][10], product[10][10];

    // Input first matrix
    printf("Enter elements of the first matrix:\n");
    inputMatrix(mat1, r1, c1);

    // Input second matrix
    printf("Enter elements of the second matrix:\n");
    inputMatrix(mat2, r2, c2);

    // Add matrices
    addMatrices(mat1, mat2, sum, r1, c1);
    printf("Sum of the matrices:\n");
    printMatrix(sum, r1, c1);

    // Multiply matrices
    multiplyMatrices(mat1, mat2, product, r1, c1, c2);
    printf("Product of the matrices:\n");
    printMatrix(product, r1, c2);

    return 0; // Indicate that the program ended successfully
}
