// C Program to swap two numbers using a temporary variable

#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("\nBEFORE SWAPPING");
    printf("\nFirst number = %d", a);
    printf("\nSecond number = %d\n", b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAFTER SWAPPING");
    printf("\nFirst number = %d", a);
    printf("\nSecond number = %d\n", b);
    return 0;
}