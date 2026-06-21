#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, len, flag=1; 

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);
    for(i = 0; i < len/2; i++)
    {
        if(str[i] != str[len-1-i]){
            flag = 0; 
            break;
        }
    }

    if(flag){
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}