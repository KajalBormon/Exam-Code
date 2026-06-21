#include<stdio.h>
#include<string.h>

int main(){
    int arr[1000];
    int i, n;
    int *p = arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("\nEnter the array: ");
    for(i = 0; i < n; i++){
        scanf("%d", p+i);
    }

    int *end = arr + n - 1; 
    while(end >= p){
        printf("%d ", *end);
        end--; 
    }

    return 0; 
}