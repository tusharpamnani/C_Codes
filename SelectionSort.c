#include <stdio.h>
void SelectionSort(int arr[], int n){
    int i,j,minIndex,temp;
    for(i=0;i<n-1;i++){
        minIndex = i;   // selecting the element to comparee it with other elements
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;   // swapping the index of comparision if necessary
            }
        }
        temp = arr[minIndex];   // swapping the value pf compared indices
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}
int main(){
    int arr[]={2,4,98,3,9,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    printf("Array before Sorting: \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    SelectionSort(arr,n);
    printf("Array after Sorting: \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}