// C Program to check whether a number is an even or odd number

#include <stdio.h>

int main()
{
    int number;

    printf("\nEnter a number : ");
    scanf("%d", &number);

    // Even number's remainder is always 0 if divided by 2.
    if (number % 2 == 0) {
        printf("%d is an even number.", number);
    }
    
    // Odd number's remainder is always 1 if divided by 2.
    else {
        printf("%d is an odd number.", number);
    }

    printf("\n\n");
    return 0;
}