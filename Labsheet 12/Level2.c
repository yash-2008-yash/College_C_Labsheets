// C Program to calculate the sum and average of the array elements

#include <stdio.h>

int main()
{
    int number_of_elements, sum = 0, average;

    printf("\nEnter the number of elements : ");
    scanf("%d", &number_of_elements);

    int array[number_of_elements];

    // Inputing the elements into the array
    printf("Enter %d elements into the array : ", number_of_elements);
    for (int i = 0; i < number_of_elements; i++) {
        scanf("%d", &array[i]);
    }

    // Calculating the sum of the array elements
    for (int i = 0; i < number_of_elements; i++) {
        sum += array[i];
    }
    
    // Calculating the average of the array elements
    average = sum / number_of_elements;

    printf("\nSum of the array elements is %d", sum);
    printf("\nAverage of the array elements is %d", average);

    printf("\n\n");
    return 0;
}