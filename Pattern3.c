/*
A
BB
CCC
DDDD
EEEEE
*/

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            printf("%c",'A'-1+i);
        }
        printf("\n");
    }
    return 0;
}