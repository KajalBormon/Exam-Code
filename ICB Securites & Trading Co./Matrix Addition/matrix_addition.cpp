#include<iostream>
using namespace std; 

int main(){
    int row, col; 
    cout << "Row and column first matrix: ";
    cin >> row >> col; 
    int mat1[row][col], mat2[row][col], res[row][col];

    cout << "First Matrix: " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> mat1[i][j]; 
        }
    }

    cout << "Second Matrix: " << endl; 
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> mat2[i][j]; 
        }
    }
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            res[i][j] = mat1[i][j] + mat2[i][j]; 
        }
    }

    cout << "Result Matrix: " << endl; 
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << res[i][j] << " "; 
        }
        cout << endl; 
    }

    return 0; 
}