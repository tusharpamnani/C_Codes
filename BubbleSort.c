#include <stdio.h>
void BubbleSort(int arr[], int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){ // goes upto the second last element
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){ // swapping the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int arr[]= {5,4,8,9,2,1,7,3};
    int n = sizeof(arr)/sizeof(arr[0]); // number of elements in array
    int i;
    printf("Array before sorting: \n");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    BubbleSort(arr,n);
    printf("Array after sorting: \n");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}