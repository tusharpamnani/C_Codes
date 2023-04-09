/*
WAP to find the reverse of a sting
*/

#include <stdio.h>
#include <conio.h>
int main(){
    char string[100],temp;
    int i,j=0;
    printf("\nEnter the string:\n");
    fgets(string,100,stdin);
    i = 0;
    j = strlen(string)-1;
    while(i<j){
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
        i++;
        j--;
    }
    printf("Reverse of the string is: %s",string);
    return 0;
}