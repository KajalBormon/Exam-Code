#include<stdio.h>

int main(){
    int digit, sum = 0; 

    printf("Enter the digit: ");
    scanf("%d", &digit);

    for(int i = 1; i <= digit/2; i++){
        if(digit % i == 0){
            sum+=i; 
        }
    }

    if(sum == digit){
        printf("%d is perfect number\n", digit);
    } else{
        printf("%d is not a perfect number\n", digit);
    }

    return 0; 
}