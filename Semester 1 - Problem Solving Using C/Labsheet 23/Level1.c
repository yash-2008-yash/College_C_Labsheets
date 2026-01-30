// C Program to define a structure to store student's information

#include <stdio.h>

struct StudentInformation
{
    char name[100];
    char roll_number[25];
    float cgpa;
};

int main()
{
    struct StudentInformation Student1;

    printf("\nEnter the student's name : ");
    fgets(Student1.name, 100, stdin);

    printf("Enter the student's roll number : ");
    fgets(Student1.roll_number, 25, stdin);

    printf("Enter the student's CGPA : ");
    scanf("%f", &Student1.cgpa);

    printf("\n-----STUDENT DETAILS-----\n");
    printf("\nStudent name: %s", Student1.name);
    printf("Student Roll Number: %s", Student1.roll_number);
    printf("Student CGPA: %.1f", Student1.cgpa);

    printf("\n\n");
    return 0;
}