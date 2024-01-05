// Given a matrix mat[][] of size N x M. The task is to find the largest rectangular sub-matrix by area whose sum is 0.

// If there are multiple solutions return the rectangle which starts from minimum column index. If you still have multiple solutions return the one having greatest row number. If no such matrix is present return a zero (0) size matrix.

#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> sumZeroMatrix(vector<vector<int>> a){
      //Code Here
    int m = a.size();
    int n = a[0].size();
    
    int left, right, up, down;
    left = right = up = down = 0;
    
    for(int i=0; i<n; i++){
        vector<int> arr(m, 0);
        
        for(int j=i; j<n; j++){
            for(int k=0; k<m; k++){
                arr[k] += a[k][j];
            }
            
            unordered_map<long long, int> map;
            map[0] = -1;
            
            int l=0, r=0;
            long long sum = 0;
            
            for(int k=0; k<m; k++){
                sum += arr[k];
                
                if(map.count(sum)){
                    if((k-map[sum]) > (r-l)){
                        l = map[sum]+1;
                        r = k+1;
                    }
                }
                else{
                    map[sum] = k;
                }
            }
            
            if((j-i+1)*(r-l) > (right-left)*(down-up)){
                up = l;
                down = r;
                left = i;
                right = j+1;
            }
        }
    }
    
    vector<vector<int>> result;
    
    for(int i=up; i<down; i++){
        vector<int> arr;
        
        for(int j=left; j<right; j++){
            arr.push_back(a[i][j]);
        }
        
        result.push_back(arr);
    }
    
    return result;
}

int main(){
    return 0;
}