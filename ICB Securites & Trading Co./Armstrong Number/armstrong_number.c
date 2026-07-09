#include<stdio.h>

int main(){
    int digit, result = 0; 

    printf("Enter the digit: ");
    scanf("%d", &digit);

    int number = digit; 

    while(number != 0){
        int n = number % 10;
        result = result + (n * n * n);
        number = number / 10;
    }

    if(result == digit){
        printf("%d is armstrong number\n", digit);
    } else {
        printf("%d is not armstrong number\n", digit);
    }

    return 0;
}