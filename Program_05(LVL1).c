// C Program to check the eligibilty of user's voting

#include <stdio.h>
int main()
{
    int user_age;

    printf("Enter your age : ");
    scanf("%d", &user_age);

    if (user_age >= 18)
    {
        printf("You are eligible to vote.");
    }

    else
    {
        printf("You are not eligible to vote.");
    }

    return 0;
}