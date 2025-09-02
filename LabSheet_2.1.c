// C Program to perform addition, subtracton, multiplication and division of two numbers.

#include <stdio.h>
int main()
{
    int a, b, sum, sub, mul, div;
    a = 10, b = 5;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    printf("Sum of %d and %d is %d\n", a, b, sum);
    printf("Difference of %d and %d is %d\n", a, b, sub);
    printf("Product of %d and %d is %d\n", a, b, mul);
    printf("Quotient of %d and %d is %d\n", a, b, div);
    return 0;
}