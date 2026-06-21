#include<stdio.h>
#include<string.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b; 
    *b = temp; 
}

int main(){
    int arr[1000], n, i;
    int *p = arr; 

    printf("Number of elements: ");
    scanf("%d", &n);

    printf("\nEnter array elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", p+i);
    }

    for(i = 0; i < n-1; i++){  // pass number
        for(int j = 0; j < n-i-1; j++){ // elements
            if(*(p+j) > *(p+j+1)){
                swap(p+j, p+j+1);
            }
        }
    }

    printf("%d ", arr[n-2]);
}