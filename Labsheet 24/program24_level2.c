// C Program to compare memory sizes of structure and union with the same members

#include <stdio.h>
#include <string.h>

struct myStructure
{
    int integer_value;
    float float_value;
    char string[25];
};

union myUnion
{
    int integer_value;
    float float_value;
    char string[25];
};

int main()
{
    printf("\nSize of Structure: %u bytes", sizeof(struct myStructure));
    printf("\nSize of Union: %u bytes", sizeof(union myUnion));

    printf("\n\n");
    return 0;
}