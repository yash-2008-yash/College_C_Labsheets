// C Program to check whether a number is even or odd using 'if' and 'else' statements

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is an even number.", num);
    }
    else
    {
        printf("%d is an odd number.", num);
        return 0;
    }
}