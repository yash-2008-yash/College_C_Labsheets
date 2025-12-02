// C Program to delete an element from an array from a specific position

#include <stdio.h>

int main()
{
    int number_of_elements, deletion_position;

    printf("\nEnter the number of elements : ");
    scanf("%d", &number_of_elements);

    int array[number_of_elements];

    // Inputing elements into the array
    printf("Enter %d elements : ", number_of_elements);
    for (int i = 0; i < number_of_elements; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position (0 to %d) : ", number_of_elements - 1);
    scanf("%d", &deletion_position);

    if (deletion_position < 0 || deletion_position >= number_of_elements) {
        printf("\nInvalid position");
    }
    else{
        for (int i = deletion_position; i < number_of_elements - 1; i++) {
            array[i] = array[i + 1];
        }
        number_of_elements--;

        // Printing the updated array after the deletion
        printf("\nArray after the deletion : ");
        for (int i = 0; i < number_of_elements; i++) {
            printf("%d ", array[i]);
        }
    }

    printf("\n\n");
    return 0;
}