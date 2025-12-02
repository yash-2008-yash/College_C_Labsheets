// C Program to find the n-th number of Fibonacci series using recursion

#include <stdio.h>

int Fibonacci(int number)
{
    if (number == 0)
    {
        return 0;
    }

    else if (number == 1)
    {
        return 1;
    }

    else
    {
        return (Fibonacci(number - 1) + Fibonacci(number - 2));
    }
}

int main()
{
    int n;

    printf("\nEnter the position : ");
    scanf("%d", &n);

    printf("The Fibonacci number %d is %d", n, Fibonacci(n));
    
    printf("\n\n");
    return 0;
}