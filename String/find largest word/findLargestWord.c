#include<stdio.h>
#include<string.h>

int main(){
    int i, maxLen = 0; 
    char str[100], word[100], largest[100];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++){
        int len = 0, j = 0; 
        while(str[i] != ' ' && str[i] != '\0'){
            word[j++] = str[i];
            len++;
            i++;
        }

        word[j] = '\0';

        if(len > maxLen){
            maxLen = len; 
            int k;
            for(k = 0; word[k] != '\0'; k++){
                largest[k] = word[k];
            }
            largest[k] = '\0';
        }
    }

    printf("Largest word: %s", largest);
    return 0; 
}