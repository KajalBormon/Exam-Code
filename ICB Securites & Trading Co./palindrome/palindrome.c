#include<stdio.h>

int main(){
    int digit, result = 0; 

    printf("Enter the digit: ");
    scanf("%d", &digit);

    int number = digit; 

    while(number != 0){
        int n = number % 10; 
        result = result * 10 + n;
        number = number / 10;
    }

    if(result == digit){
        printf("%d is palindrome\n", digit);
    } else {
        printf("%d is not palindrome\n", digit);
    }

    return 0; 
}