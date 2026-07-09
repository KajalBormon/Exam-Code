#include<iostream>
using namespace std;

int main(){
    string str; 
    cout << "Enter the string: ";
    getline(cin, str);

    for(char &ch : str){
        ch = tolower(ch);
    }

    cout << str << endl; 

    return 0;
}