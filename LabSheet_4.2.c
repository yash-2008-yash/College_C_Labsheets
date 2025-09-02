// C Program to display the size of data types using 'sizeof()' function and displaying the use of each data type with comments in the code

#include <stdio.h>
int main()
{
    int i;    // used for whole numbers without decimal points
    float f;  // used for decimal numbers with single precision
    char c;   // used for storing a single character
    double d; // used for decimal numbers with double precison
    short s;  // used for small range integers
    long l;   // used for long range integers
    printf("Size of int is %d bytes\n", sizeof(i));
    printf("Size of float is %d bytes\n", sizeof(f));
    printf("Size of char is %d byte\n", sizeof(c));
    printf("Size of double is %d bytes\n", sizeof(d));
    printf("Size of short is %d bytes\n", sizeof(s));
    printf("Size of long is %d bytes\n", sizeof(l));
    return 0;
}