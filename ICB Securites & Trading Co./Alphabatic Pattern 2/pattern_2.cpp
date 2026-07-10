#include<iostream>
using namespace std; 

int main(){
    int n; 
    cout << "Enter number of row: ";
    cin >> n; 

    for(int i = 5; i >= 1; i--){
        for(char j = 'A'; j <= 'Z'; j++){
            if(j < 'A' + i){
                cout << j;
            }
        }
        cout << endl; 
    }

    return 0; 
}