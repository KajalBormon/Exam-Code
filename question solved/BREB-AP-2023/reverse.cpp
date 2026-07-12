#include<iostream>
using namespace std; 

int main(){
    string str; 
    cout << "Enter a string: ";
    getline(cin, str);

    string current = "";

    int n = str.size(); 
    for(int i = n - 1; i >= 0; i--){
        current += str[i]; 
    }

    cout << "Reversed String: " << current << endl;
    return 0;
}