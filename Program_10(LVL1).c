// C Program to display multipication tables of a given number

#include <stdio.h>
int main()
{
    int number, i;

    printf("Enter the number you want the tables of : ");
    scanf("%d", &number);

    for (i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    
    return 0;
}