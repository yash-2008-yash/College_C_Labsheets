// C Program to find the largest and smallest element in an array

#include <stdio.h>

int main()
{
    int number_of_elements, largest, smallest;

    printf("\nEnter the number of elements : ");
    scanf("%d", &number_of_elements);

    int array[number_of_elements];

    // Inputing elements into the array
    printf("Enter %d elements into the array : ", number_of_elements);
    for (int i = 0; i < number_of_elements; i++) {
        scanf("%d", &array[i]);
    }

    largest = array[0];
    smallest = array[0];

    for (int i = 1; i < number_of_elements; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }

        if (array[i] < smallest) {
            smallest = array[i];
        }
    }

    printf("\nLargest element : %d", largest);
    printf("\nSmallest element : %d", smallest);

    printf("\n\n");

    return 0;
}