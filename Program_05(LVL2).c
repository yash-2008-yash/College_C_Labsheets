// C Program to check the eligibilty of user's driving and voting

#include <stdio.h>
int main()
{
    int user_age;

    printf("Enter your age : ");
    scanf("%d", &user_age);

    if (user_age >= 18)
    {
        printf("\nYou are eligible to vote.");
        printf("\nYou are eligible to drive a vehicle.");
    }

    else
    {
        printf("\nYou can't vote yet.");
        printf("\nWait %d more years to vote.\n", 18 - user_age);
        printf("\nYou can't drive yet.");
        printf("\nWait %d more years to drive.", 18 - user_age);
    }

    return 0;
}