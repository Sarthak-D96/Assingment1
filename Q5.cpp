//
//  Q5.cpp
//  Cpp
//
//  Created by Sarthak Duvedi on 12/08/25.
// sum of every row and every column

#include<iostream>
using namespace std;

int l = 2, m = 3;

int a [l][m] = {{1, 2, 3}, {4, 5, 6}};

// row sum

void rowSum_colSum(int a [l][m]){
    int rowSum = 0;
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < m; j++){
            rowSum = rowSum + a[i][j];
        }
        cout << "sum of " << i << "row" << rowSum <<endl;
    }
    
    int colSum = 0;
    
    for(int j = 0; j < m; j++){
        for(int i = 0; i < l; i++){
            colSum = colSum + a[i][j];
        }
        cout << "sum of " << j << "column" << colSum<<endl;
    }
    
}
