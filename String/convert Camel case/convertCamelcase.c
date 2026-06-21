#include<stdio.h>
#include<string.h>

int main() {
    int i, j = 0; 
    char str[100], res[100];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] ='\0';

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            i++; 
            if(str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32; 
            }
        }
        
        if(str[i] != '\0') {
            res[j] = str[i];
            j++;
        }
    }

    res[j] = '\0';
    printf("Camel Case: %s", res);

    return 0; 
}