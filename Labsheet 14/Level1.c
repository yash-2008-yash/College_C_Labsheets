// C Program to insert an element into an array at a specific position

#include <stdio.h>

int main()
{
    int number_of_elements, position, insertion_element;

    printf("\nEnter the number of elements : ");
    scanf("%d", &number_of_elements);

    int array[number_of_elements];

    // Inputing the elements into the array
    printf("Enter %d elements : ", number_of_elements);
    for (int i = 0; i < number_of_elements; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position (0 to %d) : ", number_of_elements);
    scanf("%d", &position);

    if (position < 0 || position > number_of_elements) {
        printf("\nInvalid position");
    }
    else {
        printf("Enter the element to be inserted : ");
        scanf("%d", &insertion_element);

        for (int i = number_of_elements; i > position; i--) {
            array[i] = array[i - 1];
        }

        array[position] = insertion_element;
        number_of_elements++;

        // Printing the updated array after the insertion
        printf("\nArray after the insertion : ");
        for (int i = 0; i < number_of_elements; i++) {
            printf("%d ", array[i]);
        }
    }

    printf("\n\n");
    return 0;
}