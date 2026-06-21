#include<stdio.h>

int largest(int a, int b, int c)
{
    if(a > b && a > c) {
        return a; 
    } else if(b > a && b > c){
        return b; 
    } else {
        return c; 
    }   
}

int main()
{
    int a, b, c; 

    printf("Enter the numbers: ");
    scanf("%d %d %d", &a, &b,&c);

    int result = largest(a, b, c);

    printf("%d is the largest value", result);

    return 0; 
}