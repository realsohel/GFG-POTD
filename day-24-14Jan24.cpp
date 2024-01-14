#include<bits/stdc++.h>
using namespace std;

// Find duplicate rows in a binary matrix
// Given a boolean matrix of size RxC where each cell contains either 0 or 1, find the row numbers (0-based) of row which already exists or are repeated.

vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
{ 
    // Your code here
    map<vector<int>,int> f;
    vector<int> ans;

    for(int i=0;i<matrix.size();i++){
        if(f.find(matrix[i])==f.end()){
            f[matrix[i]] = 1;
        }else{
            ans.push_back(i);
        }
    }
    
    return ans;
}

int main(){
    return 0;
}