#include<stdio.h>

int factorial(int n){
    if(n == 0 || n == 1){
        return 1; 
    }
    return n * factorial(n-1);
}

int main(){
    int n; 

    printf("Enter the number: ");
    scanf("%d", &n);

    int result = factorial(n);

    printf("%d factorial is %d\n", n, result);
    return 0;
}