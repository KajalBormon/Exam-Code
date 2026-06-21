#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "HELLO";
    char *p = str; 

    char *end = str + strlen(str) - 1; 
    
    while(end >= p){
        printf("%c", *end);
        end--; 
    }

    return 0; 
}