#include<stdio.h>

int main(){
    char str[200], stack[200];
    int top = -1, i; 

    printf("Enter expression: ");
    scanf("%s", str);

    for(i = 0; i < str[i] != '\0'; i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '[') {
            stack[++top] = str[i];
        }

        else if(str[i] == ')' || str[i] == '}' || str[i] == ']') {
            if(top == -1) {
                printf("Unmatched\n");
                return 0; 
            }

            char ch = stack[top--];
            if(
                (str[i] == ')' && ch != '(') || 
                (str[i] == '}' && ch != '{') || 
                (str[i] == ']' && ch != '[')
            ) 
            {
                printf("Unmatched\n");
                return 0; 
            }
        }
    }

    if(top == -1){
        printf("Matched\n");
    } else {
        printf("Unmatched\n");
    }

    return 0; 
}