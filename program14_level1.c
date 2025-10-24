// C Program to insert an element in an array at a specific location

#include <stdio.h>
int main()
{
    int array[50], number_of_elements, i, position, insertion_element;

    printf("\nEnter the number of elements : ");
    scanf("%d", &number_of_elements);

    printf("\nEnter %d elements : ", number_of_elements);
    for (i = 0; i < number_of_elements; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nEnter the position (0 to %d) : ", number_of_elements - 1);
    scanf("%d", &position);

    if (position < 0 || position > number_of_elements)
    {
        printf("\nInvalid position");
    }

    else
    {
        printf("\nEnter the element to be inserted : ");
        scanf("%d", &insertion_element);

        for (i = number_of_elements; i > position; i--)
        {
            array[i] = array[i - 1];
        }

        array[position] = insertion_element;
        number_of_elements++;

        printf("\nArray after the insertion : ");

        for (i = 0; i < number_of_elements; i++)
        {
            printf("%d ", array[i]);
        }
    }

    printf("\n");

    return 0;
}