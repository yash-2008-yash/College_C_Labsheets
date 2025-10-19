// C Program to print numbers 1 to 10 using a 'for' and 'do-while' loop

#include <stdio.h>
int main()
{
    int i = 1, j = 1;

    // FOR LOOP
    printf("USING 'for' LOOP : ");

    for (i = 1; i < 11; i++)
    {
        printf("%d ", i);
    }

    // DO-WHILE LOOP
    printf("\nUSING 'do-while' LOOP : ");
    
    do
    {
        printf("%d ", j);
        j++;
    } while (j < 11);

    return 0;
}
