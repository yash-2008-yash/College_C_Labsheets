// C Program to find the largest of two numbers using 'if' and 'else' statements

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d is the greatest number.", a);
    }
    else
    {
        printf("%d is the graetest number.", b);
    }
    return 0;
}