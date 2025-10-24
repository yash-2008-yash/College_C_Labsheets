// C Program to check whether the given number is a palindrome or not

#include <stdio.h>
int main()
{
    int number, original_number, reversed_number = 0, remainder;

    printf("\nEnter a number : ");
    scanf("%d", &number);

    original_number = number;

    while (number != 0)
    {
        remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number /= 10;
    }

    if (original_number == reversed_number)
    {
        printf("It's a palindrome number");
    }

    else
    {
        printf("It's not a palindrome number");
    }

    printf("\n");

    return 0;
}