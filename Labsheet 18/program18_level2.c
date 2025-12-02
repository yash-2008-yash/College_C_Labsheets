// C Program to concatenate two strings without using 'strcat()' function

#include <stdio.h>
#include <string.h>

int main()
{
    char string1[200], string2[100];
    int i = 0, j = 0;

    printf("\nEnter first string : ");
    fgets(string1, 200, stdin);
    string1[strcspn(string1, "\n")] = '\0';

    printf("\nEnter second string : ");
    fgets(string2, 100, stdin);
    string2[strcspn(string2, "\n")] = '\0';

    while (string1[i] != '\0')
    {
        i++;
    }
    while (string2[j] != '\0')
    {
        string1[i] = string2[j];
        i++;
        j++;
    }

    string1[i] = '\0';

    printf("\nThe Concatenated string is \"%s\"", string1);

    printf("\n");

    return 0;
}