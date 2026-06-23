#include<stdio.h>

int main()
{
    float income, tax = 0; 

    printf("Enter the income: ");
    scanf("%f", &income);

    if(income < 25000){
        tax = 0; 
    } else if(income >= 25001 && income <= 50000){
        tax = income * 0.1;
    } else if(income >= 50001 && income <= 100000) {
        tax = income * 0.2;
    } else {
        tax = income * 0.3;
    }

    printf("Total Tax: %.2f", tax);
    return 0; 
}