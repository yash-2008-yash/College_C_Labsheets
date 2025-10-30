// C Program to display the size of data types using 'sizeof()' function

#include <stdio.h>
int main()
{
    int integer_value;
    float float_value;
    char char_value;
    double double_value;
    short short_value;
    long long_value;

    printf("\nSize of int is %d bytes\n", sizeof(integer_value));
    printf("Size of float is %d bytes\n", sizeof(float_value));
    printf("Size of char is %d byte\n", sizeof(char_value));
    printf("Size of double is %d bytes\n", sizeof(double_value));
    printf("Size of short is %d bytes\n", sizeof(short_value));
    printf("Size of long is %d bytes\n", sizeof(long_value));
    
    return 0;
}