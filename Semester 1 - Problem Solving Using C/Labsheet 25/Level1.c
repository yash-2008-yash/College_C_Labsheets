// C Program to copy content of one file into another file

#include <stdio.h>

int main()
{
    FILE *file1, *file2;
    int character;

    file1 = fopen("source.txt", "r");
    file2 = fopen("copy.txt", "w");

    if (file1 == NULL || file2 == NULL) {
        printf("\nError opening file!");
        return 0;
    }

    while ((character = fgetc(file1)) != EOF) {
        fputc(character, file2);
    }

    printf("\nFile copied successfully!");

    fclose(file1);
    fclose(file2);

    printf("\n\n");
    return 0;
}
