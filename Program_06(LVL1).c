// C Program to find the largest of two numbers using 'if' and 'else' statements

#include <stdio.h>
int main()
{
    int number1, number2;

    printf("Enter two numbers : ");
    scanf("%d %d", &number1, &number2);

    if (number1 > number2)
    {
        printf("%d is the greatest number.", number1);
    }

    else
    {
        printf("%d is the graetest number.", number2);
    }

    return 0;
}