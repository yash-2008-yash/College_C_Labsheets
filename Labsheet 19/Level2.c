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

    printf("Enter second string : ");
    fgets(string2, 100, stdin);
    string2[strcspn(string2, "\n")] = '\0';

    result = strcmp(string1, string2);

    if (result == 0) {
        printf("\nBoth strings are equal.");
    }
    else {
        printf("\nBoth strings are equal.");
    }

    printf("\n\n");
    return 0;
}