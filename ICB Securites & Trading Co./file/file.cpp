#include<iostream>
#include<fstream>
using namespace std; 

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");

    int a, b; 

    in >> a >> b; 

    out << "First Number = " << a << endl;
    out << "Second Number = " << b << endl; 

    out << "Addition = " << a + b << endl; 
    out << "Subtraction = " << a - b << endl;
    out << "Multiplication = " << a * b << endl;

    in.close(); 
    out.close();

    cout << "Calculation completed. check output.txt file";

    return 0; 
}