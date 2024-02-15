#include<bits/stdc++.h>
using namespace std;

// Count all Possible Path

// You are presented with an undirected connected graph consisting of n vertices and connections between them represented by an adjacency matrix. Your objective is to determine whether it is possible to start traversing from a node, x, and return to it after traversing all the vertices at least once, using each edge exactly once.

int isPossible(vector<vector<int>>paths){
    // Code here
    int n= paths.size();
    int m=paths[0].size();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(paths[i][j]==1){
                count++;
                
            }
        }
        if(count%2!=0){
            return 0;
        }
    }
    return 1;
}
int main(){
    return 0;
}