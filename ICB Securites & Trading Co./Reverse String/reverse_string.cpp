#include<iostream>
using namespace std; 

int main(){
    string str; 
    cout << "Enter the string: ";
    // cin >> str; one word input nibe

    getline(cin, str); // space soho nibe; 

    char *p = &str[0]; 
    char *end = p + str.length() - 1; 

    while(end >= p){
        cout << *end; 
        end--;
    }

    cout << endl; 

    return 0; 
}