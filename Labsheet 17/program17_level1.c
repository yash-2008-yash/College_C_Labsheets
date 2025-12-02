// C Program to input and display a string

#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];

    printf("\nEnter a string : ");
    fgets(string, 100, stdin);

    string[strcspn(string, "\n")] = '\0';

    printf("\nYou entered \"%s\"", string);

    printf("\n");

    return 0;
}