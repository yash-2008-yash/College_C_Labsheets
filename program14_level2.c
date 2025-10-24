// C Program to delete an element from an array from a specific loaction

#include <stdio.h>
int main()
{
    int array[50], number_of_elements, i, deletion_position;

    printf("\nEnter the number of elements : ");
    scanf("%d", &number_of_elements);

    printf("\nEnter %d elements : ", number_of_elements);
    for (i = 0; i < number_of_elements; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nEnter the position (0 to %d) : ", number_of_elements - 1);
    scanf("%d", &deletion_position);

    if (deletion_position < 0 || deletion_position > number_of_elements)
    {
        printf("\nInvalid position");
    }

    else
    {
        for (i = deletion_position; i < number_of_elements - 1; i++)
        {
            array[i] = array[i + 1];
        }
        number_of_elements--;

        printf("\nArray after the deletion : ");
        for (i = 0; i < number_of_elements; i++)
        {
            printf("%d ", array[i]);
        }
    }

    printf("\n");

    return 0;
}