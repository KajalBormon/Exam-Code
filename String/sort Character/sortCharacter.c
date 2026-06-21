#include<stdio.h>
#include<string.h>

int main() {
    int i, j; 
    char str[100], temp;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    for(i = 0; i < len; i++) {
        for(j = i+1; j < len; j++) {
            if(str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp; 
            }
        }
    }

    printf("Sorting character: %s", str);
    return 0;
}