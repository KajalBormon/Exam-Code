#include<iostream>
using namespace std; 

int main(){
    int n; 
    cout << "Enter number of rows: ";
    cin >> n;
    char ch = 'A';

    for(int i = 1; i <= n; i++){
        for(char j = 'A'; j <= 'Z'; j++){
            if(j < 'A' + i){
                cout << ch;
                ch++;  
            }
        }
        cout << endl;
    }

    return 0; 
}