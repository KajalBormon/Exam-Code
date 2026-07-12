#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char c; 
    printf("Enter a character to search: ");
    scanf("%c", &c);

    int count = 0; 
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == c){
            count++;
        }
    }

    printf("%c appears in %d times", c, count);

    return 0; 
}