// C Program to input elements into an array and display the array elements

#include <stdio.h>

int main()
{
    int number_of_elements;

    printf("\nEnter the number of elements : ");
    scanf("%d", &number_of_elements);

    int array[number_of_elements];

    // Inputing the elements into the array
    printf("Enter %d elements into the array : ", number_of_elements);
    for (int i = 0; i < number_of_elements; i++) {
        scanf("%d", &array[i]);
    }

    // Printing the elements of the array
    printf("\nArray elements:");
    for (int i = 0; i < number_of_elements; i++) {
        printf("\narray[%d] = %d", i, array[i]);
    }

    printf("\n\n");
    return 0;
}