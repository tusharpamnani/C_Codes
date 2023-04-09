/*
WAP to find the avg of first n numbers
*/

#include <stdio.h>
int main(){
    int x, sum, i=1;
    float avg;
    printf("Enter the value of n: ");
    scanf("%d",&x);
    do{
        sum+=i;
        i++;
    }while(i<=x);
    printf("Sum of the first %d numbers is = %d\n",x,sum);
    avg= sum/x;
    printf("Average of the first %d numbers is = %f",x,avg);
    return 0;
}