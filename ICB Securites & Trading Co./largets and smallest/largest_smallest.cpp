#include<iostream>
#include<math.h>
using namespace std; 

int main(){
    int arr[100], n; 

    cout << "Enter the size of array: ";
    cin >> n; 

    cout << "Enter the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i]; 
    }

    // int largest = *max_element(arr, arr+n);
    // printf("%d", largest);

    // int smallest = *min_element(arr, arr+n);
    // printf("%d", smallest);

    // sort(arr, arr+n);
    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    // }

    int max = arr[0];
    int min = arr[0];

    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        } else if(arr[i] < min){
            min = arr[i];
        }
    }

    cout << "Max element: " << max << endl; 
    cout << "Min element: " << min << endl;
    
    return 0; 
}