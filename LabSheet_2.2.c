// C Program to perform addition, subtracton, multiplication, division and modulus of two numbers.

#include <stdio.h>
int main()
{
    int a, b, sum, sub, mul, div, mod;
    a = 10, b = 5;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;
    printf("Sum of %d and %d is %d\n", a, b, sum);
    printf("Difference of %d and %d is %d\n", a, b, sub);
    printf("Product of %d and %d is %d\n", a, b, mul);
    printf("Quotient of %d and %d is %d\n", a, b, div);
    printf("Remainder of %d and %d is %d\n", a, b, mod);
    return 0;
}