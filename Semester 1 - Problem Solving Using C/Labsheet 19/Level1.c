// C Program to copy one string into another string using 'strcpy()' function

#include <stdio.h>
#include <string.h>

int main()
{
    char source[100], copy[100];

    printf("\nEnter first string : ");
    fgets(source, 100, stdin);
    source[strcspn(source, "\n")] = '\0';

    strcpy(copy, source);

    printf("\nOriginal string is \"%s\"", source);
    printf("\nCopy of the string is \"%s\"", copy);

    printf("\n\n");
    return 0;
}