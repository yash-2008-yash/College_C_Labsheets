// C Program to find the sum of digits of a number

#include <stdio.h>
int main()
{
    int num, sum = 0, digit;
    printf("Enter a number : ");
    scanf("%d", &num);
    while (num > 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    printf("Sum of the digits is %d", sum);
}