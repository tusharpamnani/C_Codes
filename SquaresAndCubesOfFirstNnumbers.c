/*
WAP to display the squares nd cubes of first n numbers
*/

#include <stdio.h>
int main(){
    int x, i=1;
    printf("Enter the value of n: ");
    scanf("%d",&x);
    do{
        printf("Square of %d is %d and Cube is %d.\n",i,i*i,i*i*i);
        i++;
    }while(i<=x);
    return 0;
}