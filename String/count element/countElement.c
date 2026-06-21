#include<stdio.h>
#include<string.h>

int main()
{
    int i, vow = 0, cons = 0, dig = 0, regx = 0; 
    char vowel[10] = "aeiouAEIOU";
    char str[300];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++) {
        // count vowel and consonant 
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] < 'Z')) {
            int flag = 0; 
            for(int j = 0; j < 10; j++){
                if(str[i] == vowel[j]){
                    vow++; 
                    flag = 1; 
                    break;
                }
            }

            if(flag == 0){
                cons++; 
            }
        }

        // count digit 
        else if(str[i] >= '0' && str[i] <= '9'){
            dig++;
        } else {
            //count regular expression 
            regx++; 
        }
    }

    printf("Vowel: %d\n", vow);
    printf("Consonant: %d\n", cons);
    printf("Digit: %d\n", dig);
    printf("Regular Expression: %d\n", regx);

    return 0; 
}