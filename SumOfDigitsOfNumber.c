/*
WAP to find the sum of digits of a number
*/

#include <stdio.h>
int sum(int n){
    if(n==0){
        return 0;
    }
    return (n%10+sum(n/10));
}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int result = sum(num);
    printf("Sum if the digits of the number is: %d",result);
    return 0;
}