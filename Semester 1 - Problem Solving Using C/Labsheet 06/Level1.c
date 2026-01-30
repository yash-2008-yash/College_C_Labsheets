// C Program to find the largest between two numbers

#include <stdio.h>

int main()
{
    int number1, number2;

    printf("\nEnter two numbers : ");
    scanf("%d %d", &number1, &number2);

    if (number1 > number2) {
        printf("%d is the greatest number.", number1);
    }
    else {
        printf("%d is the graetest number.", number2);
    }

    printf("\n\n");
    return 0;
}