#include<stdio.h>
#include<string.h>

int main(){
    char str[120];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == '*'){
            continue; 
        }
        int count = 1; 

        for(int j = i + 1; j < str[j] != '\0'; j++){
            if(str[i] == str[j]){
                count++;
                str[j] = '*';
            }
        }

        printf("%c = %d\n", str[i], count);
    }

    return 0; 
}