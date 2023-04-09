/*
Accept the details of students with marks in three subjects for each student. Display the details and sum of the marks of  each student.
*/

#include <stdio.h>
struct student{
    char name[50];
    int roll;
    float marks[3], total;
};
void main(){
    struct student s[2];
    int i,j;
    printf("Enter the details for 2 students");
    for(i=0;i<2;i++){
        printf("\nEnter the roll number: ");
        scanf("%d",&s[i].roll);
        printf("\nEnter the name: ");
        scanf("%s",s[i].name);
        for(j=0;j<3;j++){
            printf("\nEnter the marks: ");
            scanf("%f",&s[i].marks[j]);
        }
    }
    printf("Entered details were: ");
    for(i=0;i<2;i++){
        printf("details for student number %d\n",i+1);
        printf("Name: %s",s[i].name);
        printf("Roll Number: %d\n",s[i].roll);
        s[i].total = 0;
        for(j=0;j<3;j++){
            s[i].total += s[i].marks[j];
        }
        printf("Total Marks are: %f\n", s[i].total);
    }
}