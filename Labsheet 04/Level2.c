// C Program to display the size of different data types using 'sizeof()' function and to display the use of each data type with comments in the code

#include <stdio.h>

int main()
{
    int integer_value;   // used for whole numbers without decimal points
    float float_value;   // used for decimal numbers with single precision
    char char_value;     // used for storing a single character
    double double_value; // used for decimal numbers with double precison
    short short_value;   // used for small range integers
    long long_value;     // used for long range integers

    printf("\nSize of int is %zu bytes\n", sizeof(integer_value));
    printf("Size of float is %zu bytes\n", sizeof(float_value));
    printf("Size of char is %zu byte\n", sizeof(char_value));
    printf("Size of double is %zu bytes\n", sizeof(double_value));
    printf("Size of short is %zu bytes\n", sizeof(short_value));
    printf("Size of long is %zu bytes", sizeof(long_value));

    printf("\n\n");
    return 0;
}