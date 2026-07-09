#include<iostream>
using namespace std; 

int main(){
    int digit, power; 

    cout << "Enter the digit and power: ";
    cin >> digit >> power;
   

    int result = pow(digit, power);
    cout << "Result: " << result << endl;

    return 0; 
}