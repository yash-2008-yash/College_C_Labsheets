// C Program to find the largest of three numbers using 'if' and 'else' statements

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d is the greatest number.", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the graetest number.", b);
    }
    else
    {
        printf("%d is the greatest number.", c);
    }
    return 0;
}