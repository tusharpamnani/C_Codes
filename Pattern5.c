/*
    1
   232
  34543
 4567654
567898765
*/

#include <stdio.h>
void main(){
    int x,i,j,k,l,m,n;
    printf("Enter the number of rows: ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j = 1; j<=x-i;j++){
            printf(" ");
        }
        n=i;
        for(int k = 1; k<=i;k++){
            printf("%d",n++);
        }
        for(int l =n-2; l>=i; l--){
            printf("%d",l);
        }
        printf("\n");
    }
}