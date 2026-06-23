#include<stdio.h>

int main(){
    int i, n, sum = 0, term = 1, diff = 1; 

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Series: ");
    for(i = 1; i <= n; i++) {
        printf("%d ", term);

        sum+=term; 

        term = term + diff; 
        diff++; 
    }

    printf("Sum: %d", sum);
    return 0; 
}

