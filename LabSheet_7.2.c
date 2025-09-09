// C Program to check whether a number is positive or negative or zero using 'if' and 'else' statements

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("%d is an positive number.", num);
    }
    else if (num < 0)
    {
        printf("%d is an negative number.", num);
    }
    else
    {
        printf("The number is zero.");
    }
    return 0;
}