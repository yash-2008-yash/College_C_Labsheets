// C Program to add two matrices

#include <stdio.h>
int main()
{
    int rows, columns, i, j;

    printf("\nEnter the number of rows and columns : ");
    scanf("%d %d", &rows, &columns);

    int matrix1[rows][columns], matrix2[rows][columns], sum[rows][columns];

    printf("\nEnter the elements of 1st matrix : \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter the elements of 2nd matrix : \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\nSum of the matrices is : \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}