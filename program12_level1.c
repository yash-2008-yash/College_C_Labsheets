// C Program to input an array and display the array elements

#include <stdio.h>
int main()
{
    int array[50], number_of_elements, i;

    printf("\nEnter the number of elements : ");
    scanf("%d", &number_of_elements);

    printf("Enter %d elements into the array : ", number_of_elements);
    for (i = 0; i < number_of_elements; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nArray elements :");
    for (i = 0; i < number_of_elements; i++)
    {
        printf("\narray[%d] = %d", i, array[i]);
    }

    printf("\n");

    return 0;
}