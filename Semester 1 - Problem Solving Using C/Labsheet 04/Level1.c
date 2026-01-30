// C Program to display the size of different data types using 'sizeof()' function

#include <stdio.h>

int main()
{
    int integer_value;
    float float_value;
    char char_value;
    double double_value;
    short short_value;
    long long_value;

    printf("\nSize of int is %zu bytes\n", sizeof(integer_value));
    printf("Size of float is %zu bytes\n", sizeof(float_value));
    printf("Size of char is %zu byte\n", sizeof(char_value));
    printf("Size of double is %zu bytes\n", sizeof(double_value));
    printf("Size of short is %zu bytes\n", sizeof(short_value));
    printf("Size of long is %zu bytes", sizeof(long_value));

    /*
        sizeof() gives a number that is not an int value.
        It gives a 'size_t' value, which is an unsigned size value.
        %d is only for int, so it causes warnings during the execution.
        %zu is the correct format for printing 'size_t'.
        We use %zu because it's made for printing 'size_t' value.
    */

    printf("\n\n");
    return 0;
}