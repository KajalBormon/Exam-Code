#include<iostream>
using namespace std; 

int main(){
    int r1, c1, r2, c2; 

    cout << "Enter row and col first matrix: " << endl; 
    cin >> r1 >> c1; 

    cout << "Enter row and col second matrix: " << endl; 
    cin >> r2 >> c2; 

    int A[r1][c1], B[r2][c2], C[r1][c2];

    if(c1 != r2){
        cout << "Matrix multiplication is not possible";
        return 0; 
    }

    cout << "Enter first matrix: " << endl;
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            cin >> A[i][j]; 
        }
    }

    cout << "Enter Second matrix: " << endl;
    for(int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++){
            cin >> B[i][j]; 
        }
    }

    // initialize result matrix
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            C[i][j] = 0; 
        }
    }

    // matrix multiplication 
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            for(int k = 0; k < c1; k++){
                C[i][j]+=A[i][k] * B[k][j];
            }
        }
    }

    cout << "Result matrix: " << endl;
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            cout << C[i][j] << " "; 
        }
        cout << endl; 
    }

    return 0;
}