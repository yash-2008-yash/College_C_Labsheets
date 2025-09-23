// C Program to display multipication tables of a given number

#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter the number you want the tables of : ");
    scanf("%d", &num);
    for (i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}