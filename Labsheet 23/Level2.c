// C Program to read and display details of n number of students

#include <stdio.h>

struct StudentInformation
{
    char name[100];
    char roll_number[25];
    float cgpa;
};

int main()
{
    int n;

    printf("\nHow many students do you want to enter? : ");
    scanf("%d", &n);
    getchar();

    struct StudentInformation students[n];

    for (int i = 0; i < n; i++) {
        printf("\n--- Enter details for Student %d ---\n", i + 1);

        printf("Enter student's name: ");
        fgets(students[i].name, 100, stdin);

        printf("Enter student's roll number: ");
        fgets(students[i].roll_number, 25, stdin);

        printf("Enter student's CGPA: ");
        scanf("%f", &students[i].cgpa);
        getchar(); // clear leftover newline
    }

    printf("\n\n----- ALL STUDENT DETAILS -----\n");

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s", students[i].name);
        printf("Roll Number: %s", students[i].roll_number);
        printf("CGPA: %.2f\n", students[i].cgpa);
    }

    printf("\n");
    return 0;
}