#include <stdio.h>

int main() {
    int rows, cols;
    int A[10][10], B[10][10];
    int sum[10][10], diff[10][10];
    int i, j;

    printf("Enter rows of matrix: ");
    scanf("%d", &rows);

    printf("Enter columns of matrix: ");
    scanf("%d", &cols);

    printf("Enter elements of matrix A:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Addition
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Subtraction
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            diff[i][j] = A[i][j] - B[i][j];
        }
    }

    printf("\nSum of matrices A and B is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nDifference of matrices A and B is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}