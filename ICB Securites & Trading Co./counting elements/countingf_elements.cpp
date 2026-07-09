#include<iostream>
using namespace std; 

int main(){
    string str; 
    int vowel = 0, cons = 0, digit = 0, space = 0;
    cout << "Enter the string: ";
    getline(cin, str);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            if(str[i] == 'a' || 
                str[i] == 'e' || 
                str[i] == 'i' || 
                str[i] == 'o' || 
                str[i] == 'u'
            ){
                vowel++; 
            } else{
                cons++;
            }
        }

        if(str[i] >= '0' && str[i] <= '9'){
            digit++; 
        }

        if(str[i] == ' '){
            space++; 
        }
    }

    cout << "Vowel: " << vowel << endl;
    cout << "Consonant: " << cons << endl;
    cout << "Digits: " << digit << endl;
    cout << "spaces: " << space << endl; 

    return 0; 
}