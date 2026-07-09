#include<iostream>
using namespace std; 

int main(){
    string str; 
    cout << "Enter the string: ";
    getline(cin, str);

    int start = 0; 
    int end = str.length() - 1; 

    bool palindrome = true; 

    while(start < end){
        if(str[start] != str[end]){
            palindrome = false; 
            break; 
        }
        start++; 
        end--; 
    }

    if(palindrome){
        cout << "The string is a palindrome." << endl; 
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0; 
}