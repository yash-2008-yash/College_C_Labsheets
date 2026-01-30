// C Program to input a string and display it

#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];

    printf("\nEnter a string : ");
    fgets(string, 100, stdin);

    string[strcspn(string, "\n")] = '\0';

    printf("\nYou entered \"%s\"", string);

    printf("\n\n");
    return 0;
}