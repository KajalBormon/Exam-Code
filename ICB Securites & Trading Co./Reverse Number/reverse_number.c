#include<stdio.h>

int main(){
    int digit, n, result = 0; 

    printf("Enter the digit: ");
    scanf("%d", &digit);

    while(digit != 0){
        n = digit % 10; 
        result = result * 10 + n; 
        digit = digit / 10;
    }

    printf("Reverse Number is: %d\n", result);

    return 0; 
}