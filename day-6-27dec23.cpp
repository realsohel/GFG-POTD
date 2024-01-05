// Anti Diagonal Traversal of Matrix
// Give a N*N square matrix, return an array of its anti-diagonals in top-leftmost to bottom-rightmost order. In an element of a anti-diagonal (i, j), surrounding elements will be (i+1, j-1) and (i-1, j+1). Look at the examples for more clarity.


#include <bits/stdc++.h>
using namespace std;

vector<int> antiDiagonalPattern(vector<vector<int>> matrix) {
    // Code here
    int n = matrix.size();
    vector<int> ans;
    
    // 1st part
    for(int j=0;j<n;j++){
        for(int x=0,y=j; y>-1 && x<n; x++,y--){
            ans.push_back(matrix[x][y]);
        }
    }

    // 2nd part
    for(int i=1;i<n;i++){
        for(int y=n-1,x=i; i>-1 && x<n; x++,y--){
            ans.push_back(matrix[x][y]);
        }
    }

    return ans;
}

int main(){
    return 0;
}
