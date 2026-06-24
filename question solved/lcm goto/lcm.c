#include<stdio.h>

int main(){
    int a, b, lcm; 

    printf("Enter the a and b: ");
    scanf("%d %d", &a, &b);

    lcm = (a > b) ? a : b; 

    start: 
        if(lcm % a == 0 && lcm % b == 0){
            printf("LCM is: %d\n", lcm);
        } else {
            lcm++;
            goto start; 
        }

    return 0; 
}