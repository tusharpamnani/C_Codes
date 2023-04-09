/*
WAP to swap numbers using call by refernce
*/

#include <stdio.h>
void swap(int *a, int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}
int main(){
    int x,y;
    printf("Enter the values for x and y: ");
    scanf("%d %d",&x,&y);
    printf("Numbers before swapping: %d %d \n",x,y);
    swap(&x,&y);
    printf("\nNumbers after swapping: %d %d",x,y);
    return 0;
}