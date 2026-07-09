#include<stdio.h>
#include<string.h>

int main(){
    char str[200];
    printf("Enter the string: ");

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(int i = 0; i < str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }

    printf("%s\n", str);
    return 0; 
}