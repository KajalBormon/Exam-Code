#include<stdio.h>
#include<string.h>

int main(){
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int len = strlen(str1);

    for(int i = 0; str2[i] != '\0'; i++){
        str1[len + i] = str2[i];
    }

    // Add null character at the end 
    str1[len + strlen(str2)] = '\0';

    printf("Merged String: %s\n", str1);
    return 0; 
}