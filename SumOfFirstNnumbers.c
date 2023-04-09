/*
WAP to find the sum of first 10 numbers
*/

#include <stdio.h>
int main(){
    int i=1,sum=0;
    while(i<11){
        sum+=i;
        i++;
    }
    printf("sum = %d\n",sum);
    return 0;
}