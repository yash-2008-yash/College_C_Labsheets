// C Program to find the sum of digits of a number

#include <stdio.h>
int main()
{
    int number, sum = 0, digit;

    printf("\nEnter a number : ");
    scanf("%d", &number);

    while (number > 0)
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }

    printf("Sum of the digits is %d\n", sum);

    return 0;
}