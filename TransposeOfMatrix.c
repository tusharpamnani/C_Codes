/*
WAP to display the transopeof a 2x2 Matrix
*/

#include <stdio.h>
int main(){
    int arr1[2][2], arr2[2][2];
    printf("Enter the elements for first matrix: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0;j<2; j++){
            arr2[i][j] = arr1[j][i];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2; j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}