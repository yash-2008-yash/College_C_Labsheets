// C Program to swap two numbers without using a temporary variable

#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("\nBEFORE SWAPPING");
    printf("\nFirst number = %d", a);
    printf("\nSecond number = %d\n", b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAFTER SWAPPING");
    printf("\nFirst number = %d", a);
    printf("\nSecond number = %d\n", b);
    return 0;
}