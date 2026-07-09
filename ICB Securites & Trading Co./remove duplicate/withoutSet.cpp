#include<iostream>
using namespace std; 

int main(){
    int n; 
    cout << "Enter the number of elements: ";
    cin >> n; 

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];

        bool duplicate = false; 

        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                duplicate = true; 
                break; 
            }
        }

        if(!duplicate){
            cout << arr[i] << " ";
        }
    }

    return 0; 
}