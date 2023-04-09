/*
WAP to find the number of occurence of a digit in a number
*/

#include <stdio.h>
int count_digit(int number, int digit){
    if(number == 0){
        return 0;
    }
    else {
        int last_digit = number % 10;
        if(last_digit == digit){
            return 1 + count_digit(number/10,digit);
        }
        else{
            return count_digit(number/10,digit);
        }
    }
}
int main(){
    int number, digit;
    printf("Enter the number: ");
    scanf("%d",&number);
    printf("Enter the digit: ");
    scanf("%d",&digit);
    int result = count_digit(number,digit);
    printf("%d occured %d times in %d", digit, result, number);
    return 0;
}