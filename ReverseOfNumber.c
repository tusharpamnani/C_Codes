/*
WAP to find the reverse of a number using recursion
*/

#include <stdio.h>
int reverse (int n, int rev){
    if(n == 0){
        return rev;
    }
    rev = rev * 10 + n % 10;
    return reverse(n/10,rev);
}
int main(){
    int x, rev;
    printf("Enter the number: ");
    scanf("%d",&x);
    rev = reverse(x,0);
    printf("The reverse of the number is: %d", rev);
    return 0;
}