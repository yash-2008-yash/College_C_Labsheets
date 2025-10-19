// C Program to calculate the sum and average of the array elements

#include <stdio.h>
int main()
{
    int array[50], number_of_elements, i, sum=0, average;

    printf("Enter the number of elements : ");
    scanf("%d", &number_of_elements);

    printf("Enter %d elements into the array : ", number_of_elements);
    for (i = 0; i < number_of_elements; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < number_of_elements; i++)
    {
        sum += array[i];
    }

    average = sum / number_of_elements;

    printf("\nSum of the array elements is %d", sum);
    printf("\nAverage of the array elements is %d", average);

    return 0;
}