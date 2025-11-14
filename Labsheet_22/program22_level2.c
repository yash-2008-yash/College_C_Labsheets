// C Program to demonstrate 'Call by Reference' using pointers

#include <stdio.h>

int add10(int *number)
{
    *number = *number + 10;
    printf("\nInside function (Call by Value): *Number = %d", *number);
}

int main()
{
    int n = 5;

    printf("\nBefore the function call: Number = %d", n);
    add10(&n);
    printf("\nAfter the function call: Number = %d", n);
    
    printf("\n\n");
    return 0;
}