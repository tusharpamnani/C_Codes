/*
    Program to accept details of students with marks in three subjects for each student.
    Display the details and the sum of the marks for each student.
*/

#include <stdio.h>

// Define a structure to store student details
struct student {
    char name[50];
    int roll;
    float marks[3], total;
};

void main() {
    // Declare an array of structures to store details for 2 students
    struct student s[2];
    int i, j;

    // Accept details for 2 students
    printf("Enter the details for 2 students:\n");
    for (i = 0; i < 2; i++) {
        // Input roll number
        printf("\nEnter the roll number: ");
        scanf("%d", &s[i].roll);

        // Input name
        printf("Enter the name: ");
        scanf("%s", s[i].name);

        // Input marks for three subjects
        for (j = 0; j < 3; j++) {
            printf("Enter the marks for subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
        }
    }

    // Display entered details and sum of marks for each student
    printf("\nEntered details and total marks:\n");
    for (i = 0; i < 2; i++) {
        // Display details for each student
        printf("\nDetails for student number %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        s[i].total = 0;

        // Calculate the total marks for each student
        for (j = 0; j < 3; j++) {
            s[i].total += s[i].marks[j];
        }

        // Display total marks
        printf("Total Marks: %.2f\n", s[i].total);
    }
}
