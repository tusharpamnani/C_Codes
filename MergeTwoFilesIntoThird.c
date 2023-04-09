/*
Merge two files into the third file
*/

#include <stdio.h>
int main(){
    FILE *file1, *file2, *file3;
    char ch;
    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");
    file3 = fopen("mergedfile.txt", "w");
    while(ch = fgetc(file1) != EOF){
        fputc(ch, file3);
    }
    while(ch = fgetc(file2) != EOF){
        fputc(ch, file3);
    }
    fclose(file1);
    fclose(file2);
    fclose(file3);
    printf("Files merged successfully");
    return 0;
}