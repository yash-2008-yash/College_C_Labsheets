// C Program to write a function with arguments, but no return value

#include <stdio.h>

int sum(int num1, int num2)
{
    printf("The sum of %d and %d is %d", num1, num2, num1 + num2);
}

int main()
{
    int a, b;
    printf("\nEnter two numbers : ");
    scanf("%d %d", &a, &b);
    sum(a, b);
    printf("\n\n");
    return 0;
}