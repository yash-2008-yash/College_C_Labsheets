// C Program to display the multiplication tables of 1 to 10 using nested loops

#include <stdio.h>

int main()
{
    for (int i = 1; i < 11; i++) {
        printf("\nTable of %d\n", i);

        for (int j = 1; j < 11; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }  

        printf("\nPress any key to see the next tables");
        getchar();
    }

    printf("\n");
    return 0;
}