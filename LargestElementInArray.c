/*
WAP to display the largest element in the array
*/

#include <stdio.h>
int main(){
    int x,arr[x],largest;
    printf("Enter the number of elements ");
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        printf("Enter the element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    for(int i = 1;i<x;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("The largest element in the array is %d",largest);
    return 0;
}