#include<stdio.h>

float calculateTax(float salary){
     if(salary < 25000){
        return 0; 
    } else if(salary >= 25001 && salary <= 50000){
        return salary * 0.1;
    } else if(salary >= 50001 && salary <= 100000) {
        return salary * 0.2;
    } else {
        return salary * 0.3;
    }
}

int main()
{
    float salary[3], tax[3];
    int i, highest = 0;
    
    for(i = 0; i < 3; i++){
        printf("Enter the %d Employee Income: ", i+1);
        scanf("%f", &salary[i]);

        tax[i] = calculateTax(salary[i]);
    }

    for(i = 0; i < 3; i++){
        if(tax[i] > tax[highest]) {
            highest = i;
        }
    }

    printf("\nHighest Tax Paying Employee: %d\n", highest + 1); 
    printf("Salary = %.2f\n", salary[highest]); 
    printf("Tax = %.2f\n", tax[highest]);

    return 0; 
}



