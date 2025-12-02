// C Program to count the number of lines and words in a file

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *file;
    char filename[100], ch;
    int lines = 0, words = 0;
    int inWord = 0;

    printf("\nEnter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("\nError: Could not open file.");

        printf("\n\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == '\n')
        {
            lines++;
        }

        if (isspace(ch))
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            inWord = 1;
            words++;
        }
    }

    fclose(file);

    if (words > 0)
        lines++;

    printf("\nTotal Lines : %d", lines);
    printf("\nTotal Words : %d\n", words);

    printf("\n\n");
    return 0;
}