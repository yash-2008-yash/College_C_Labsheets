// C Program to find the transpose of a matrix

#include <stdio.h>

int main()
{
    int rows, columns;

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
    printf("\nOriginal matrix :\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Printing the transpose of the matrix
    printf("\nTranspose of the matrix :\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}