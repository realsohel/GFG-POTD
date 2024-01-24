#include<bits/stdc++.h>
using namespace std;

// Check if a given graph is tree or not

// You are given an undirected graph of N nodes (numbered from 0 to N-1) and M edges. Return 1 if the graph is a tree, else return 0.

// Note: The input graph can have self-loops and multiple edges.

int isTree(int n, int m, vector<vector<int>> &adj) {
    // code here
    vector<int> adjL[n];

    for(auto x:adj){
        adjL[x[1]].push_back(x[0]);
        adjL[x[0]].push_back(x[1]);
    }

    vector<int> vis(n,0);

    queue<pair<int,int>> q;
    q.push({0,-1});
    vis[0]=1;

    while (q.size()){
        auto temp = q.front();
        q.pop();
        for(auto x:adjL[temp.first]){
            if(!vis[x]){
                vis[x]=1;
                q.push({x,temp.first});
            }
            else{
                if(x!=temp.second) 
                    return 0;
            }
        }
    }

    for(int i=0;i<n;i++){
        if(!vis[i])
            return 0;
    }

    return 1;  

}

int main(){
    return 0;
}