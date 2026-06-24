#include<stdio.h>

int main()
{
    int n, sum = 0; 

    printf("Enter the 5 digit Number: ");
    scanf("%d", &n);

    if(n < 10000 || n > 99999) {
        printf("Please input 5 digit number\n");
        return 1; 
    }

    while(n > 0){
        sum+=n%10; 
        n = n / 10;
    }

    printf("Summation %d\n", sum);
    return 0; 
}

