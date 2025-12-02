// C Program to check whether a matrix is symmetric or not

#include <stdio.h>

int main()
{
    int rows, columns, symmetric = 1;

    printf("\nEnter the number of rows and columns : ");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns], transpose[rows][columns];

    // Inputing the elements into the matrix
    printf("\nEnter the elements of the matrix :\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Matrix [%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Transposing the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Printing the original matrix
    printf("\nOriginal Matrix :\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Printing the transpose of the matrix
    printf("\nTranspose Matrix :\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    if (rows != columns) {
        symmetric = 0;
    }
    else {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                if (matrix[i][j] != transpose[i][j]) {
                    symmetric = 0;
                    break;
                }
            }
        }
    }

    if (symmetric == 0) {
        printf("\nIt's not a symmetric matrix");
    }
    else {
        printf("\nIt's a symmetric matrix");
    }

    printf("\n\n");
    return 0;
}