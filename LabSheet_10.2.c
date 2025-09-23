// C Program to display multiplication tables of 1 to 10 using nested loops

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i < 11; i++)
    {
        printf("Table of %d\n", i);

        for (j = 1; j < 11; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\nPress any key to see next tables\n");
        getchar();
    }
    return 0;
}