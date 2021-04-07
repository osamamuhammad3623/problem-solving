/*
You are given a 2D array A of size N∗N.
Calculate the number of pairs i,j such that elements of row i equal elements of column j.

Input
The first line contains one positive integer N, (1≤N≤30) – the size of the array.

Each of the next N lines contains N integer numbers (1≤Ai,j≤100).

Output
Print one integer, the number of pairs i,j (0≤i,j≤N−1), such that elements of row i equal elements of column j.

**examples:-

- input:
3
1 2 3
2 5 6
3 4 4
- ouput:
1

- input:
3
1 2 3
3 4 5
2 6 7
- ouput:
0

- input:
3
1 1 1
1 1 1
1 1 1
- ouput:
9

*/


#include <iostream>
#include <vector>
using namespace std;

#define vector2d vector<vector<int>>

vector2d Transpose(vector2d origin, int n){
    vector2d result(n, vector<int> (n));

    for (int row=0; row<n;row++){
        for (int col=0; col<n;col++){
            result[row][col] = origin[col][row];
        }
    }
    return result;
}

int main(){
    int n;
    cin >> n;
    vector2d mat(n, vector<int> (n));

    for (int row=0; row<n;row++){
        for (int col=0; col<n;col++){
            cin >> mat[row][col];
        }
    }

    vector2d transposed_mat = Transpose(mat, n);

    int rowEqualsCol=0;
    for (int i=0; i<n; i++){
        for (int j=0;j<n;j++){
            if (mat[i] == transposed_mat[j]){
                rowEqualsCol++;
            }
        }
    }

    cout << rowEqualsCol;
}