// C Program to check whether a number is positive or negative or zero

#include <stdio.h>

int main()
{
    int number;

    printf("\nEnter a number : ");
    scanf("%d", &number);

    if (number > 0) {
        printf("%d is a positive number.", number);
    }
    else if (number < 0) {
        printf("%d is a negative number.", number);
    }
    else {
        printf("The number is zero.");
    }

    printf("\n\n");
    return 0;
}