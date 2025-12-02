// C Program to display the number of vowels and consonants in a string

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char string[100];
    int vowels = 0, consonants = 0;
    char character;

    printf("\nEnter a string : ");
    fgets(string, 100, stdin);

    string[strcspn(string, "\n")] = '\0';

    for (int i = 0; string[i] != '\0'; i++)
    {
        character = tolower(string[i]);

        if (character >= 'a' && character <= 'z')
        {
            if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    printf("\nVowels in \"%s\" is %d", string, vowels);
    printf("\nConsonants in \"%s\" is %d", string, consonants);

    printf("\n");
    return 0;
}