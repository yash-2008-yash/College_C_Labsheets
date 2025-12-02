// C Program to compare two strings using 'strcmp()' function

#include <stdio.h>
#include <string.h>

int main()
{
    char string1[100], string2[100];
    int result = 0;

    printf("\nEnter first string : ");
    fgets(string1, 100, stdin);
    string1[strcspn(string1, "\n")] = '\0';

    printf("\nEnter second string : ");
    fgets(string2, 100, stdin);
    string2[strcspn(string2, "\n")] = '\0';

    result = strcmp(string1, string2);

    printf(result == 0 ? "\nBoth strings are equal" : "\nBoth strings are not equal.");

    printf("\n");
    
    return 0;
}