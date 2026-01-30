// C Program to display multipication tables of a given number

#include <stdio.h>

int main()
{
    int number;

    printf("\nEnter the number you want the tables of : ");
    scanf("%d", &number);

    for (int i = 1; i < 11; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    printf("\n");
    return 0;
}