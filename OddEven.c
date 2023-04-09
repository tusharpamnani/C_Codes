/*
WAP to find ODD or EVEN
*/

#include <stdio.h>
int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    if(x%2==0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}