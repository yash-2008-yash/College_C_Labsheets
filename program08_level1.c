// C Program to display the day of the week using 'switch-case'

#include <stdio.h>
int main()
{
    int day;

    printf("\nEnter the day number (1-7) : ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    case 3:
        printf("Wednesday");
        break;

    case 4:
        printf("Thursday");
        break;

    case 5:
        printf("Friday");
        break;

    case 6:
        printf("Saturday");
        break;

    case 7:
        printf("Sunday");
        break;
    }

    printf("\n");

    return 0;
}