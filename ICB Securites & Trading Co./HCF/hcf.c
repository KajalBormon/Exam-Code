#include<stdio.h>

int main(){
    int a, b; 

    printf("Enter the number a and b: ");
    scanf("%d %d", &a, &b);

    while(b != 0){
        int temp = b; 
        b = a % b; 
        a = temp; 
    }

    printf("HCF is %d\n", a);

    return 0; 
}