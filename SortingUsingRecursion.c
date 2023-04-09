/*
Sort an array of intergers using recursion
*/

#include <stdio.h>
void sort(int x[], int m){
    int i,j,temp;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(x[j-1]>=x[j]){
                temp = x[j-1];
                x[j-1] = x[j];
                x[j] = temp;
            }
        }
    }
}
int main(){
    int marks[5] = {15,12,13,10,14};
    printf("Marks before sorting: \n");
    for(int i=0; i<5; i++){
        printf("%d ",marks[i]);
    }
    sort(marks,5);
    printf("\nMarks after sorting: \n");
    for(int i=0; i<5; i++){
        printf("%d ",marks[i]);
    }
    return 0;
}