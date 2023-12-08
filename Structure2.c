/*
    Structure for Employee Details
*/

#include <stdio.h>

// Define a structure to store employee details
struct employee {
    char name[20];
    int id;
    float salary;
};

// Function to display employee details
void display(struct employee *e) {
    // Display header for the employee details
    printf("\nName\tID\tSalary\n");

    // Display employee details
    printf("%s\t%d\t%.2f", e->name, e->id, e->salary);
}

// Main function
void main() {
    // Declare and initialize an employee structure with default values
    struct employee emp = {"Ram", 14, 1500000.50};

    // Call the display function to show employee details
    display(&emp);
}
