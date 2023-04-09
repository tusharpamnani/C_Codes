/*
WAP to find the fibonacci series
*/

#include <stdio.h>
int fibonacci(int n){
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else{
        return (fibonacci(n-1)+fibonacci(n-2));
    }
}
int main(){
    int x,i;
    printf("Enter the number: ");
    scanf("%d",&x);
    printf("Fibonacci series:\n");
    for(int i=0; i<x; i++){
        printf("%d ",fibonacci(i));
    }
    return 0;
}