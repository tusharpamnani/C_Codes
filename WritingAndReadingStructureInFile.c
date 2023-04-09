/*
Write a structure to a file
*/

#include <stdio.h>
struct person{  // creating the structure
    char name[20];
    int age;
};
int main(){
    FILE *file1;
    struct person p = {"john",19};  // defining the structure
    file1 = fopen("DATA.txt", "wb");    // opening the file
    fwrite(&p, sizeof(struct person), 1, file1);    // 1 is the number of structures we need to write
    fclose(file1);
    printf("Structure written successfully\n");
    // reading the contents of the file
    file1 = fopen("DATA.txt", "rb");
    fread(&p, sizeof(struct person), 1, file1);
    fclose(file1);
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    
    return 0;
}