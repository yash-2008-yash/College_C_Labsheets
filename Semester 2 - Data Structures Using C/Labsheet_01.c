// Implementation of INSERTION, DELETION, and TRAVERSAL on a One-Dimensional array

#include <stdio.h>

int main() {
    int number_of_elements, choice, position, insertion_element;

    printf("\nEnter the number of elements : ");
    scanf("%d", &number_of_elements);

    int array[100];   // fixed size to avoid overflow

    // Input elements
    printf("Enter %d elements : ", number_of_elements);
    for (int i = 0; i < number_of_elements; i++) {
        scanf("%d", &array[i]);
    }

    do {
        printf("\n\n---ARRAY OPERATIONS MENU---");
        printf("\n1. Insertion");
        printf("\n2. Deletion");
        printf("\n3. Traversal");
        printf("\n4. Exit");
        printf("\n\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter position (0 to %d): ", number_of_elements);
            scanf("%d", &position);

            if (position < 0 || position > number_of_elements) {
                printf("Invalid position!");
            } 
            else {
                printf("Enter element to be inserted: ");
                scanf("%d", &insertion_element);

                // shift elements right
                for (int i = number_of_elements; i > position; i--) {
                    array[i] = array[i - 1];
                }

                array[position] = insertion_element;
                number_of_elements++;

                printf("Array after insertion: ");
                for (int i = 0; i < number_of_elements; i++) {
                    printf("%d ", array[i]);
                }
            }
            break;

        case 2:
            printf("Enter position (0 to %d): ", number_of_elements - 1);
            scanf("%d", &position);

            if (position < 0 || position >= number_of_elements) {
                printf("Invalid position!");
            } 
            else {
                // shift elements left
                for (int i = position; i < number_of_elements - 1; i++) {
                    array[i] = array[i + 1];
                }

                number_of_elements--;

                printf("Array after deletion: ");
                for (int i = 0; i < number_of_elements; i++) {
                    printf("%d ", array[i]);
                }
            }
            break;

        case 3:
            printf("The array elements are: ");
            for (int i = 0; i < number_of_elements; i++) {
                printf("%d ", array[i]);
            }
            break;

        case 4:
            printf("Exiting the program...");
            break;

        default:
            printf("Invalid choice! Please try again.");
        }

    } while (choice != 4);

    printf("\n\n");
    return 0;
}