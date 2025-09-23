// C Program to check whether the given number is a palindrome or not

#include <stdio.h>
int main()
{
    int num, temp, digit, sum = 0, rev = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        digit = num % 10;
        sum = sum + digit;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    printf("Sum of the digits is %d", sum);
    if (rev == temp)
    {
        printf("\nIt's a palindrome number");
    }
    else
    {
        printf("\nIt's not a palindrome number");
    }
}