#include <stdio.h>
int BinarySearch(int arr[], int n,int x){
    int low = 0, high = n-1, mid;
    while(low <= high){
        mid=(low + high)/2;
        if (arr[mid] == x){
            return mid;
        }
        else if(arr[mid] < x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 4;
    int result = BinarySearch(arr,n,x);
    if(result == -1){
        printf("Element not found\n");
    }
    else{
        printf("Element found at index %d\n",result);
    }
    return 0;
}