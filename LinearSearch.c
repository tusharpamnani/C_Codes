#include <stdio.h>
int LinearSearch(int arr[],int n,int x){
    int i;
    for(i=0;i<n;i++){
        if(arr[i] == x){    // If the element is found
            return i;   // Return the index of the element
        }
    }
    return -1; // If the element is not found return -1
}
int main(){
    int arr[] = {7,8,9,4,5,6,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 8;  // element to be searched
    int result = LinearSearch(arr,n,x);
    if (result == -1){
        printf("Search not found\n");
    }
    else{
        printf("Search found at index %d\n",result);
    }
    return 0;
}