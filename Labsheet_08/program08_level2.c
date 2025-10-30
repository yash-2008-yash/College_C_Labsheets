// C Program to display the day of the week using 'switch-case' and handle valid inputs with a 'default' case

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

    // 'default' shows it's block of code if user gives invalid inputs.
    default:
        printf("Invalid day number. Enter a number between 1 to 7.\n");
    }

    printf("\n");

    return 0;
}