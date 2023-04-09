/*
WAP to display the smallest element in the array
*/

#include <stdio.h>
int main(){
    int x,arr[x],smallest;
    printf("Enter the number of elements ");
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        printf("Enter the element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    smallest=arr[0];
    for(int i = 1;i<x;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    printf("The smallest element in the array is %d",smallest);
    return 0;
}