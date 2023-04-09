/*
Copy a file to another
*/

#include <stdio.h>
int main(){
    FILE *source, *destination;
    char ch;
    source = fopen("filename1.txt", "r");
    destination = fopen("filename2.txt", "w");
    while(ch = fgetc(source) != EOF){
        fputs(ch, destination);
    }
    fclose(destination);
    fclose(source);
    printf("Files copied successfully");
    return 0;
}