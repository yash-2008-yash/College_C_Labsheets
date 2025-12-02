// C Program to subtract two matrices

#include <stdio.h>

int main()
{
    int rows, columns;

    printf("\nEnter the number of rows and columns : ");
    scanf("%d %d", &rows, &columns);

    int matrix1[rows][columns], matrix2[rows][columns], difference[rows][columns];

    // Inputing elements of 1st matrix
    printf("\nEnter the elements of 1st matrix : \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Matrix 1 [%d][%d] = ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Inputing elements of 2nd matrix
    printf("\nEnter the elements of 2nd matrix : \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Matrix 2 [%d][%d] = ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Subtracting the two matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Displaying the sum of the matrices
    printf("\nDifference of the matrices is : \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}