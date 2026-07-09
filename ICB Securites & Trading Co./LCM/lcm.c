#include<stdio.h>

int main(){
    int a, b; 

    printf("Enter the a and b: ");
    scanf("%d %d", &a, &b);

    int x = a; 
    int y = b; 

    while(y != 0){
        int temp = y; 
        y = x % y;
        x = temp; 
    }

    int hcf = x; 

    int lcm = (a*b)/hcf;

    printf("LCM is %d\n", lcm);

    return 0; 
}

/* 
    Ayhane a and b er value take x and y er maje rekhe dite hoy karon x and y bar bar change hoy change hole value change hoye gele pore jokhn a and b cross kora hobe tokhn given value ta pawa jabe nah changing value ta cole asbe. 
*/