// C Program to swap two numbers using a temporary variable

#include <stdio.h>
int main()
{
    int number1, number2, temporary_variable;

    printf("Enter two numbers : ");
    scanf("%d %d", &number1, &number2);

    printf("\nBEFORE SWAPPING");
    printf("\nFirst number = %d", number1);
    printf("\nSecond number = %d\n", number2);

    temporary_variable = number1;
    number1 = number2;
    number2 = temporary_variable;

    printf("\nAFTER SWAPPING");
    printf("\nFirst number = %d", number1);
    printf("\nSecond number = %d\n", number2);

    return 0;
}