// C Program to check whether a number is even or odd using 'if' and 'else' statements

#include <stdio.h>
int main()
{
    int number;

    printf("Enter a number : ");
    scanf("%d", &number);

    // Even number's remainder is 0 when it's divided by 2.
    if (number % 2 == 0)
    {
        printf("%d is an even number.", number);
    }
    
    // Odd number's remainder isn't 0 when it's divided by 2, it's 1.
    else
    {
        printf("%d is an odd number.", number);
    }

    return 0;
}