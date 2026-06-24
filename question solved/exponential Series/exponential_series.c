#include<stdio.h>

long long factorial(int n){
    if (n == 0 || n == 1){
        return 1; 
    }
    return n * factorial(n-1);
}

long long power(int x, int n){
    long long p = 1.0; 
    for(int i = 1; i <= n; i++){
        p*=x;
    }
    return p; 
}

int main()
{
    int i, x, n;
    double sum = 1;  

    printf("Enter the number of x: ");
    scanf("%d", &x);

    printf("Enter the number of n: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++){
        sum+= (double) power(x,i)/factorial(i);
    }

    printf("e^%d = %.3lf\n", x, sum);
    return 0; 
}

