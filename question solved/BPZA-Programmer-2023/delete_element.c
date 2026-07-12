#include<stdio.h>
#include<stdbool.h>

int main(){
    int n, arr[100], i, j; 
    printf("Enter the number of element: ");
    scanf("%d", &n);

    printf("Enter the array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]); 
    }

    for(i = 0; i < n; i++){
        bool duplicate = false; 

        for(j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                duplicate = true; 
                break; 
            }
        }

        if(!duplicate){
            printf("%d ", arr[i]);
        }
    }

    return 0; 
}