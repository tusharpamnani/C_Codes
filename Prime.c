/*
WAP to find whether the number is prime or not
*/

#include <stdio.h>
int main(){
    int x, flag = 0;
    printf("Enter the number: ");
    scanf("%d",&x);
    for(int i=2; i<=x/2; i++){
        if(x%i==0){
            flag = 1;
            break;
        }
    }
    if(flag==0){
        printf("Prime\n");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}