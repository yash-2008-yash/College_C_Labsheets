// C Program to swap two numbers without using a temporary variable

#include <stdio.h>
int main()
{
    int number1, number2;

    printf("\nEnter two numbers : ");
    scanf("%d %d", &number1, &number2);

    printf("\nBEFORE SWAPPING");
    printf("\nFirst number = %d", number1);
    printf("\nSecond number = %d\n", number2);

    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;

    printf("\nAFTER SWAPPING");
    printf("\nFirst number = %d", number1);
    printf("\nSecond number = %d\n", number2);

    printf("\n");

    return 0;
}