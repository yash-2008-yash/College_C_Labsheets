// C Program to concatenate two strings using 'strcat()' function

#include <stdio.h>
#include <string.h>

int main()
{
    char string1[100], string2[100];

    printf("\nEnter first string : ");
    fgets(string1, 100, stdin);
    string1[strcspn(string1, "\n")] = '\0';

    printf("\nEnter second string : ");
    fgets(string2, 100, stdin);
    string2[strcspn(string2, "\n")] = '\0';

    strcat(string1, string2);

    printf("\nThe Concatenated string is \"%s\"", string1);

    printf("\n");

    return 0;
}