/*
WAP to display the sum of an array's elements
*/

#include <stdio.h>
int main(){
    int arr[5],sum=0;
    printf("Enter the elements: ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("Sum = %d\n",sum);
    return 0;
}