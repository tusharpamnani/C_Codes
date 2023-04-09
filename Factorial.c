/*
WAP to find the factorial using recursion
*/

#include <stdio.h>
int factorial(int n){
    if (n == 0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    int result = factorial(x);
    printf("Factorial of %d is %d",x,result);
    return 0;
}