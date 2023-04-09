/*
WAP to find the power of a number using recursion
*/

#include <stdio.h>
int Power(int x, int n){        // x=base  n=power
    if(n==0){
        return 1;
    }
    else{
        return (x*Power(x,n-1));
    }
}
int main(){
    int base, exponent;
    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the exponent: ");
    scanf("%d",&exponent);
    int result = Power(base, exponent);
    printf("The result is %d", result);
    return 0;
}