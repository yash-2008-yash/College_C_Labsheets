// C Program to check the eligibilty of user's voting in elections

#include <stdio.h>

int main()
{
    int user_age;

    printf("\nEnter your age : ");
    scanf("%d", &user_age);

    if (user_age >= 18) {
        printf("You are eligible for voting in the elections.");
    }
    else {
        printf("You are not eligible for voting in the elections.");
    }

    printf("\n\n");
    return 0;
}