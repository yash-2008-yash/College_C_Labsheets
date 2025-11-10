// C Program to copy one string into another string using 'strcpy()' function

#include <stdio.h>
#include <string.h>

int main()
{
    char string1[100], string2[100];

    printf("\nEnter first string : ");
    fgets(string1, 100, stdin);
    string1[strcspn(string1, "\n")] = '\0';

    strcpy(string2, string1);

    printf("\n1st string is \"%s\"", string1);
    printf("\n2nd string is \"%s\"", string2);

    printf("\n");
    return 0;
}