#include<iostream>
using namespace std; 

int main(){
    int n; 
    cout << "Enter number of rows: ";
    cin >> n; 

    for(int i = 1; i <= n; i++){
        //print spaces 
        for(int j = 1; j <= n - i; j++){
            cout << " "; 
        }

        // Space with Star 
        for(int j = 1; j <= 2 * i - 1; j++){
            if(i == n || j == 1 || j == 2 * i - 1){
                cout << "*"; 
            } else {
                cout << " ";
            }
        }
        cout << endl; 
    }

    return 0;
}