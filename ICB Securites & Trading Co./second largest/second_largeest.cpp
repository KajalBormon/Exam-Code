#include<iostream>
using namespace std; 

int main(){
    int arr[100], n; 

    cout << "Enter the number of array: "; 
    cin >> n; 

    cout << "Array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n, greater<int>());
    cout << "Second Largest: " << arr[1] << endl;

    return 0; 
}