// C Program to display the size of data types using 'sizeof()' function

#include <stdio.h>
int main()
{
    int i;
    float f;
    char c;
    double d;
    short s;
    long l;
    printf("Size of int is %d bytes\n", sizeof(i));
    printf("Size of float is %d bytes\n", sizeof(f));
    printf("Size of char is %d byte\n", sizeof(c));
    printf("Size of double is %d bytes\n", sizeof(d));
    printf("Size of short is %d bytes\n", sizeof(s));
    printf("Size of long is %d bytes\n", sizeof(l));
    return 0;
}