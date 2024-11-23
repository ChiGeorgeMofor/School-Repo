#include <stdio.h>

void inputMatrix(int rows, int cols, int matrix[10][10]) {
    printf("Enter the elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int rows, int cols, int matrix[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int rows, int cols, int matrixA[10][10], int matrixB[10][10], int result[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
}

void multiplyMatrices(int rowsA, int colsA, int matrixA[10][10], int rowsB, int colsB, int matrixB[10][10], int result[10][10]) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0; // Initialize the result element
            for (int k = 0; k < colsA; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}

int main() {
    int rowsA, colsA, rowsB, colsB;

    // Input dimensions for the first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &rowsA, &colsA);

    // Input dimensions for the second matrix
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &rowsB, &colsB);

    // Check if addition is possible
    if (rowsA != rowsB || colsA != colsB) {
        printf("Matrix addition is not possible. Dimensions must be the same.\n");
        return 1;
    }

    // Check if multiplication is possible
    if (colsA != rowsB) {
        printf("Matrix multiplication is not possible. Columns of the first matrix must equal rows of the second matrix.\n");
        return 1;
    }

    // Declare matrices
    int matrixA[10][10];
    int matrixB[10][10];
    int sum[10][10];
    int product[10][10];

    // Input the first matrix
    inputMatrix(rowsA, colsA, matrixA);

    // Input the second matrix
    inputMatrix(rowsB, colsB, matrixB);

    // Add matrices
    addMatrices(rowsA, colsA, matrixA, matrixB, sum);
    printf("Sum of the matrices:\n");
    displayMatrix(rowsA, colsA, sum);

    // Multiply matrices
    multiplyMatrices(rowsA, colsA, matrixA, rowsB, colsB, matrixB, product);
    printf("Product of the matrices:\n");
    displayMatrix(rowsA, colsB, product);

    return 0;
}