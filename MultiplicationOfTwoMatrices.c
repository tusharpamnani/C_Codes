/*
WAP to print multiplication of two matrices in the third matrix
*/


#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the number of rows and columns for first matrix: ");
    scanf("%d %d",&a,&b);
    int arr1[a][b];
    printf("Enter the elements of first matrix: \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the number of rows and columns for second matrix: \n");
    scanf("%d %d",&c,&d);
    int arr2[c][d], arr3[a][d];
    printf("Enter the elements of second matrix: \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    if(b != c){
        printf("The matrices cannot be multiplied :( \n");
    return 0;
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            arr3[i][j] = 0;
            for(int k=0;k<b;k++){
                arr3[i][j]+= arr1[i][k] * arr2[k][j]; 
            }
        }
    }
    printf("The Multiplied Matrix is: \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}