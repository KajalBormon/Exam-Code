#include<stdio.h>
#include<string.h>

void reverseString(char *str){
    char *end = str + strlen(str) - 1; 

    while(end >= str) {
        printf("%c", *end);
        end--;
    }
}

int main()
{
    char str[200];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    reverseString(str);

    return 0; 
}