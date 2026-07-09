#include<iostream>
#include<map>
using namespace std; 

int main(){
    int n; 
    cout << "Enter the number of element: ";
    cin >> n; 

    map<int, int> freq; 

    for(int i = 0; i < n; i++){
        int num; 
        cin >> num; 

        freq[num]++;
    }

    cout << "Elements: " <<endl; 
    for(auto it : freq){
        cout << it.first << " --> " << it.second << endl; 
    }

    return 0; 
}