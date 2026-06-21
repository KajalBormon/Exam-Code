#include<stdio.h>
#include<string.h>

int main(){
    char str[200];
    char *p = str; 

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    char *end = str + len - 1; 
    int flag = 1; 

    for(int i = 0; i < len/2; i++){
        if(*end == *p){
            p++;
            end--;
        } else {
            flag = 0; 
            break;
        }
    }

    if(flag == 1){
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }

    return 0; 
}