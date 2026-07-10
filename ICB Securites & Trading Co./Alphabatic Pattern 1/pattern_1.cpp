#include<iostream>
using namespace std; 

int main(){
    int n; 
    cout << "Enter the number of row: ";
    cin >> n; 

    for(int i = 1; i <= n; i++){
        for(char j = 'A'; j <= 'Z'; j++){
            if(j < 'A' + i){
                cout << j; 
            }
        }
        cout << endl; 
    }

    return 0; 
}