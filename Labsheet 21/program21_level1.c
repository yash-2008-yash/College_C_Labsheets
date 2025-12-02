// C Program to find the factorial of a number using recursion

#include <stdio.h>

long int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }

    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    int n;

    printf("\nEnter a number : ");
    scanf("%d", &n);

    printf("The factorial of %d is %ld", n, factorial(n));

    printf("\n\n");
    return 0;
}