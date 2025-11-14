// C Program to check whether a matrix is symmetric or not

#include <stdio.h>
int main()
{
    int rows, columns, i, j, symmetric = 1;

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

    printf("\nOriginal Matrix :\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose Matrix :\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    if (rows != columns)
    {
        symmetric = 0;
    }

    else
    {
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                if (matrix[i][j] != transpose[i][j])
                {
                    symmetric = 0;
                    break;
                }
            }
        }
    }

    if (symmetric == 0)
    {
        printf("\nIt's not a symmetric matrix");
    }
    else
    {
        printf("\nIt's a symmetric matrix");
    }

    printf("\n");

    return 0;
}