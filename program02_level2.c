// C Program to perform basic arithmetic operations (addition, subtraction, multiplication, division) and modulus on two numbers

#include <stdio.h>
int main()
{
    int number1, number2, sum, difference, product, quotient, remainder;

    printf("\nEnter two numbers : ");
    scanf("%d %d", &number1, &number2);

    sum = number1 + number2;
    difference = number1 - number2;
    product = number1 * number2;
    quotient = number1 / number2;
    remainder = number1 % number2;

    printf("\nSum of %d and %d is %d", number1, number2, sum);
    printf("\nDifference of %d and %d is %d", number1, number2, difference);
    printf("\nProduct of %d and %d is %d", number1, number2, product);
    printf("\nQuotient of %d and %d is %d", number1, number2, quotient);
    printf("\nRemainder of %d and %d is %d", number1, number2, remainder);

    printf("\n");

    return 0;
}