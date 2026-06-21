#include<stdio.h>
#include<string.h>

int main()
{
    char str[300];
    int i, count = 0; 

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ' && (i == 0 || str[i-1] == ' ')){
            count++;
        }
    }

    printf("Total word: %d", count);
    return 0; 
}

/*
Explanation: 
----------------------

    if(str[i] != ' ' && (i == 0 || str[i-1] == ' ')){  jodi space na pai and first character or character er previous ta space thake taholey count hobe na hoy skip hoye abr loop e dukbe 
        count++;
    }

    I _ l o v e _ p r o g r a m m i n g _ i n _ C \0

    ▶ i = 0
str[0] = 'I'

Condition:

str[i] != ' ' → true
(i == 0) → true

👉 count++

count = 1
▶ i = 1
' ' (space)

👉 skip (no count)

▶ i = 2
'l'

Check:

str[i] != ' ' → true
str[i-1] = ' ' → true

👉 new word

count = 2
▶ i = 7
'p'

previous is space

👉 count = 3

▶ i = 18
'i'

👉 count = 4

▶ i = 21
'C'

👉 count = 5

✔ Final Result
Total words = 5

*/