#include<stdio.h>
#include<string.h>

int main(){
    int i; 
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++){
        if(i == 0 || str[i-1] == ' ') {
            if(str[i] >= 'a' && str[i] <='z'){
                str[i] = str[i] - 32; 
            }
        } else {
            if(str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + 32;
            }
        }
    }

    printf("Title Case: %s", str);
    return 0; 
}