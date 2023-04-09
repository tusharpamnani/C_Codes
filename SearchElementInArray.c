/*
WAP to search an element in an array
*/

#include <stdio.h>
int main(){
    int x, arr[x], search,flag= 0;
    printf("Enter the number of elemnets: ");
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        printf("Enter the element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the search element: ");
    scanf("%d",&search);
    for(int i=0;i<x;i++){
        if(arr[i]==search){
            flag ++;
        }
    }
    if(flag ==1){
        printf("Element Found");
    }
    else{
        printf("Element Not Found");
    }
    return 0;
}