/*
WAP to add two matrices
*/

#include <stdio.h>
int main(){
    int arr1[3][3], arr2[3][3], arr3[3][3];
    printf("Enter the elements of first 3x3 matrix: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf ("Enter the elements of second 3x3 matrix: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("Matrix 1 + Matrix 2 = \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}