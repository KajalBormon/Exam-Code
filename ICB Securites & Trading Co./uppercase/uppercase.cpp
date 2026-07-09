#include<iostream>
// #include<ctype>
using namespace std; 

int main(){
    string str; 
    cout << "Enter the string: ";
    getline(cin, str);

    // for(char &ch : str){
    //     ch = toupper(ch);
    // }

    for(int i = 0; i < str.length(); i++){
        str[i] = toupper(str[i]);
    }

    cout << str << endl; 

    return 0; 
}