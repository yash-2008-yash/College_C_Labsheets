// C Program to demonstrate the use of union to store different data types

#include <stdio.h>
#include <string.h>

union Data
{
    int integer_value;
    float float_value;
    char string[25];
};

int main()
{
    union Data D;

    D.integer_value = 10;
    printf("\nInteger value: %d", D.integer_value);

    D.float_value = 3.142;
    printf("\nFloat value: %.2f", D.float_value);
    
    strcpy(D.string, "Hello");
    printf("\nString value: %s", D.string);

    printf("\n\n");
    return 0;
}