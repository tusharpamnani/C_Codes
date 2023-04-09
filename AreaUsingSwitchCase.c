/*
WAP using switch case to find the area of circle and rectangle
*/

#include <stdio.h>
int main(){
    int x, radius, length, breadth;
    float area_Circle, area_Rectangle;
    printf("Enter the number: 1- Area of Circle: 2- Area of Rectangle: ");
    scanf("%d",&x);
    switch(x){
        case 1: 
        printf("Area of Circle: ");
        printf("Enter the radius: ");
        scanf("%d",&radius);
        area_Circle = 3.14*radius*radius;
        printf("Area of the cirlce: %f", area_Circle);
        break;
        case 2: 
        printf("Area of Rectangle: ");
        printf("Enter the length and breadth: ");
        scanf("%d %d",&length,&breadth);
        area_Rectangle = length*breadth;
        printf("Area of Rectangle: %f",area_Rectangle);
        break;
    }
    return 0;
}