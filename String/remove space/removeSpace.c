#include<stdio.h>
#include<string.h>

int main()
{
    int i, j = 0; 
    char str[100], r[100];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] != ' ') {
            r[j] = str[i];
            j++;
        }
    }

    r[j] = '\0';
    printf("String after removing spaces: %s", r);
    return 0;
}