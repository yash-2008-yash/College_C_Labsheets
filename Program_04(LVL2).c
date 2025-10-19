// C Program to display the size of data types using 'sizeof()' function and displaying the use of each data type with comments in the code

#include <stdio.h>
int main()
{
    int integer_value;   // used for whole numbers without decimal points
    float float_value;   // used for decimal numbers with single precision
    char char_value;     // used for storing a single character
    double double_value; // used for decimal numbers with double precison
    short short_value;   // used for small range integers
    long long_value;     // used for long range integers

    printf("Size of int is %d bytes\n", sizeof(integer_value));
    printf("Size of float is %d bytes\n", sizeof(float_value));
    printf("Size of char is %d byte\n", sizeof(char_value));
    printf("Size of double is %d bytes\n", sizeof(double_value));
    printf("Size of short is %d bytes\n", sizeof(short_value));
    printf("Size of long is %d bytes\n", sizeof(long_value));

    return 0;
}