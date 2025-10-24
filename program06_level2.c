// C Program to find the largest of three numbers using 'if' and 'else' statements

#include <stdio.h>
int main()
{
    int number1, number2, number3;

    printf("\nEnter three numbers : ");
    scanf("%d %d %d", &number1, &number2, &number3);

    if (number1 > number2 && number1 > number3)
    {
        printf("%d is the greatest number.", number1);
    }

    else if (number2 > number1 && number2 > number3)
    {
        printf("%d is the greatest number.", number2);
    }

    else
    {
        printf("%d is the greatest number.", number3);
    }

    printf("\n");

    return 0;
}