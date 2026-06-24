#include<stdio.h>

int main(){
    int row, col;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int m[row][col];

    printf("Enter the Matrix m × n: \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &m[i][j]);
        }
    }

    printf("Sum of rows: \n");
    for(int i = 0; i < row; i++){
        int rowSum = 0; 
        for(int j = 0; j < col; j++){
            rowSum+=m[i][j];
        }
        printf("Sum of columns %d: %d\n", i+1, rowSum);
    }

    printf("Sum of columns: \n");
    for(int j = 0; j < col; j++){
        int colSum = 0; 
        for(int i = 0; i < row; i++){
            colSum+=m[i][j];
        }
        printf("Sum of columns %d: %d\n", j+1, colSum);
    }
}

