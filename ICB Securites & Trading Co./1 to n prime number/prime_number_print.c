#include<stdio.h>

int main(){
    int n, isPrime = 0; 

    printf("Enter the number: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++){
        isPrime = 1; 

        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }

        if(isPrime){
            printf("%d ", i);
        }
    }

    return 0; 
}