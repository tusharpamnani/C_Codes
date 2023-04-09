/*
WAP to find the largest of the entered numbers
*/

#include <stdio.h>
int main(){
    int x,y,z;
    printf("Enter the numbers: ");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x>z){
        printf("%d is the largest",x);
    }
    else if(y>z){
        printf("%d is the largest",y);
    }
    else{
        printf("%d is is the largest",z);
    }
    return 0;
}