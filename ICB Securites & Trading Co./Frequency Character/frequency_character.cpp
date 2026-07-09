#include<iostream>
#include<map>
using namespace std; 

int main(){
    string str; 
    cout << "Enter the string: ";
    getline(cin, str);

    map<char, int> freq; 

    for(auto ch : str){
        freq[ch]++;
    }

    for(auto x : freq){
        cout << x.first << " --> " << x.second << endl;
    }

    return 0; 
}