#include <stdio.h>

// Function to display a matrix
void displayMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to calculate the sum of two matrices
void matrixSum(int matrix1[3][3], int matrix2[3][3], int resultMatrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int matrix1[3][3] = {{3, 2, 4}, {2, 6, 3}, {5, 8, 7}};
    int matrix2[3][3] = {{1, 4, 6}, {4, 3, 2}, {5, 7, 8}};
    int resultMatrix[3][3];

    printf("Matrix 1:\n");
    displayMatrix(matrix1);

    printf("\nMatrix 2:\n");
    displayMatrix(matrix2);

    matrixSum(matrix1, matrix2, resultMatrix);

    printf("\nMatrix Sum:\n");
    displayMatrix(resultMatrix);

    return 0;
}
