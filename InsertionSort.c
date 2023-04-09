#include <stdio.h>
void InsertionSort(int arr[],int n){
    int i,j,key;
    for(i=0;i<n;i++){
        key = arr [i];  // setting the key to the current element
        j = i-1;
        while(j>=0 && arr[j] > key){    // creating space for the element to be inserted
            arr[j+1] =arr[j];
            j -= 1;
        }
        arr[j+1] = key; // inserting the key at it's current position
    }
}
int main(){
    int arr[] = {8,9,7,4,5,2,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    int i;
    printf("Array before sorting: \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    InsertionSort(arr,n);
    printf("Array after sorting: \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}