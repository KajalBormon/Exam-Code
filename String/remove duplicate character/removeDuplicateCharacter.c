#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, k = 0; 
    char str[200], result[200]; 

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++) { // full string 
        int found = 0; 

        // check duplicate in result string 
        for(j = 0; j < k; j++) {
            if(str[i] == str[j]){
               found = 1; 
               break; // break hole for loop theke ber hoye result string e character ta add kore dibe
            }
        }

        if(!found) {
            result[k++] = str[i];
        }
    }

    result[k] = '\0';
    printf("After removing duplicate character: %s", result);
    return 0; 
}