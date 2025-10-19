// C Program to check whether a number is positive or negative or zero using 'if' and 'else' statements

#include <stdio.h>
int main()
{
    int number;

    printf("Enter a number : ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("%d is an positive number.", number);
    }

    else if (number < 0)
    {
        printf("%d is an negative number.", number);
    }

    else
    {
        printf("The number is zero.");
    }

    return 0;
}