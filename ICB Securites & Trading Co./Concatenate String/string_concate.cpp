#include<iostream>
using namespace std; 

int main(){
    string str1, str2, finalString;

    cout << "Enter the First string: ";
    getline(cin, str1);

    cout << "Enter the second string: ";
    getline(cin, str2);

    string mergedString = str1 + str2; 

    cout << "Merged string: " << mergedString << endl; 
    return 0; 
}