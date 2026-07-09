#include<iostream>
using namespace std; 

int main(){
    string str; 
    int count = 0; 
    cout << "Enter the string: ";
    getline(cin, str);

    for(int i = 0; str[i] != '\0'; i++){
        count++; 
    }

    cout << "String length: " << count << endl; 

    return 0; 
}