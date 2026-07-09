#include<stdio.h>

int main(){
    int digit, sum = 0, n; 

    printf("Enter the digit: ");
    scanf("%d", &digit);

    while(digit != 0){
        n = digit % 10; 
        sum = sum + n; 
        digit = digit / 10;
    }

    printf("Sum of digits: %d\n", sum);
    return 0; 
}