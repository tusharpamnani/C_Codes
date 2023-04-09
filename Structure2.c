/*
Structure for employee details
*/

#include <stdio.h>
struct employee{
    char name[20];
    int id;
    float salary;
};
void display(struct employee *e){
    printf("\nName\tID\tSalary\n");
    printf("%s\t%d\t%.2f",e->name,e->id,e->salary);
}
void main(){
    struct employee emp={"Ram",14,1500000.50};
    display(&emp);
}