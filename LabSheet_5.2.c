// C Program to check whether the user is eligible for voting and driving or not

#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("\nYou are eligible to vote.");
    }
    else
    {
        printf("\nYou can't vote yet.");
        printf("\nWait %d more years to vote.", 18 - age);
    }
    if (age >= 18)
    {
        printf("\nYou are eligible to apply for a DL.");
    }
    else
    {
        printf("\nYou can't drive yet.");
        printf("\nWait %d more years to drive.", 18 - age);
    }
    return 0;
}