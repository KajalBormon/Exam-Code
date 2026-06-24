#include<stdio.h>
void fun(int x){
    if(x < 0){
        return;
    }
    printf("%d\n", x--);
    fun(--x);
    printf("%d\n", x);
}

int main(){
    fun(5);
    return 0; 
}