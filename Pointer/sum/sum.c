#include<stdio.h>

int main()
{
    int arr[1000];
    int i, n, sum = 0;
    int *p = arr; 

    printf("Enter the number of element: \n");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", p+i);
    }

    for(i = 0; i < n; i++){
        sum+=*p;
        p++;
    }

    printf("Sum: %d", sum);

}