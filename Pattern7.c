/*
     *
    **
   ***
  ****
 *****
******
*/

#include <stdio.h>
int main(){
    int x,m=1;
    printf("Enter the number of rows: ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x-i;j++){
            printf(" ");
        }
        for(int k=1;k<=m;k++){
        printf("*");
    }
    printf("\n");
    m++;
    }
    return 0;
}