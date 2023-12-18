#include <stdio.h>

const int MAX_SIZE = 10;

void findMaxElementColumnSum(double matrix[MAX_SIZE][MAX_SIZE], int size) {
    // Find the maximum element and its column
    double maxElement = matrix[0][0];
    int maxColumn = 0;

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
                maxColumn = j;
            }
        }
    }

    // Find the sum of elements in the corresponding column
    double columnSum = 0;
    for (int i = 0; i < size; ++i) {
        columnSum += matrix[i][maxColumn];
    }

    // Print the result
    printf("Maximum element: %.2f\n", maxElement);
    printf("Column with the maximum element (zero-based indexing): %d\n", maxColumn);
    printf("Sum of elements in this column: %.2f\n", columnSum);
}

int main() {
    int size;
    double matrix[MAX_SIZE][MAX_SIZE];

    // Input matrix size
    printf("Enter the size of the square matrix (N <= 10): ");
    scanf_s("%d", &size);
    if (size <= 10) {

        // Input matrix elements
        printf("Enter the elements of the matrix:\n");
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                scanf_s("%lf", &matrix[i][j]);
            }
        }

        // Find and print the result
        findMaxElementColumnSum(matrix, size);
        return 0;
    }
    printf("The size of the matrix must be <10");
    return 0;
}