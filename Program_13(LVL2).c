// C Program to find the largest, second largest and smallest number in an array

#include <stdio.h>
int main()
{
    int array[50], number_of_elements, i, largest, second_largest, smallest;

    printf("Enter the number of elements : ");
    scanf("%d", &number_of_elements);

    printf("Enter %d elements into the array : ", number_of_elements);
    for (i = 0; i < number_of_elements; i++)
    {
        scanf("%d", &array[i]);
    }

    largest = array[0];
    second_largest = array[0];
    smallest = array[0];

    for (i = 1; i < number_of_elements; i++)
    {
        if (array[i] > largest)
        {
            second_largest = largest;
            largest = array[i];
        }

        else if (array[i] > second_largest && array[i] != largest)
        {
            second_largest = array[i];
        }

        if (array[i] < smallest)
        {
            smallest = array[i];
        }
    }

    printf("\nLargest element : %d", largest);
    printf("\nSecond largest element : %d", second_largest);
    printf("\nSmallest element : %d", smallest);

    return 0;
}