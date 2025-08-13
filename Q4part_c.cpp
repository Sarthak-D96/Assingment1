//
//  part_c.cpp
//  Cpp
//
//  Created by Sarthak Duvedi on 12/08/25.
// Transpose of matrix

#include<iostream>
using namespace std;


int l = 3, m = 3;


int a [l][m] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};


void transposeOfMatrix(int a [l][m]){
    
    for(int i = 0 ; i < l / 2; i++){
        for(int j = 0; j < m; j++){
            if(i == j){
                continue;
            } else{
                a[i][j] = a[j][i];
            }
        }
    }
    
}

