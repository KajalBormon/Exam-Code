#include<iostream>
using namespace std; 

int main(){
    string str; 
    cout << "Enter the string: ";
    getline(cin, str);

    string largestWord = "";
    string currentWord = "";

    for(char ch : str){
        if(ch == ' '){
            if(currentWord.length() > largestWord.length()){
                largestWord = currentWord;
            }
            currentWord = "";
        } else {
            currentWord += ch; 
        }
    }

    //Check the last word
    if(currentWord.length() > largestWord.length()){
        largestWord = currentWord;
    }

    cout << "Largest Word: " << largestWord;
    return 0; 
}