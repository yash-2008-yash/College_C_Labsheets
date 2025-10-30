// C Program to find the transpose of a matrix

#include <stdio.h>
int main()
{
    int rows, columns, i, j;

    printf("\nEnter the number of rows and columns : ");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns], transpose[rows][columns];

    printf("\nEnter the elements of the matrix :\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nTranspose of the matrix :\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}