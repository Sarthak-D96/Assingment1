//
//  part_b.cpp
//  Cpp
//
//  Created by Sarthak Duvedi on 12/08/25.
// Matrix Multiplication

#include<iostream>
using namespace std;

int a [2][2] = {{1, 2}, {3, 4}};

int b [2][2] = {{5, 6}, {7, 8}};

int l = 2, m = 2, j = 2, n = 2;

void matrixMultiplication(int** a [][], int** b [][]){
    int c[l][n];
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < l; k++){
                c[i][j] +=  a[i][k] + b[k][j];
            }
        }
    }
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < n; j++){
            cout << c[i][j]<<" ";
        }
        cout << endl;
    }
    
}
