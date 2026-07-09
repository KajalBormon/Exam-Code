#include<iostream>
using namespace std; 

int main(){
    int n1, n2; 

    cout << "Enter the first array length: ";
    cin >> n1; 
    int arr1[n1];

    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }

    cout << "Enter the second array length: ";
    cin >> n2; 
    int arr2[n2];

    for(int i = 0; i < n2; i++){
        cin >> arr2[i];
    }

    int merge[n1+n2];

    // Copy first array 
    for(int i = 0; i < n1; i++){
        merge[i] = arr1[i]; 
    }

    // Copy second array 
    for(int i = 0; i < n2; i++){
        merge[n1+i] = arr2[i];
    }

    // Final array 
    cout << "Merged Array: " << endl; 
    for(int i = 0; i < n1+n2; i++){
        cout << merge[i] << " "; 
    }

    cout << endl; 

    return 0; 

}