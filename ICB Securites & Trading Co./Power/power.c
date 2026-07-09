#include<stdio.h>

int main(){
    int digit, power, result = 1; 

    printf("Enter the digit and power: ");
    scanf("%d %d", &digit, &power);

    for(int i = 1; i <= power; i++){
        result = result * digit; 
    }

    printf("Result: %d\n", result);

    return 0; 
}