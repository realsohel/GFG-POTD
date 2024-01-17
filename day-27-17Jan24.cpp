#include<bits/stdc++.h>
using namespace std;

// All Unique Permutations of an array

// Given an array arr[] of length n. Find all possible unique permutations of the array in sorted order. A sequence A is greater than sequence B if there is an index i for which Aj = Bj for all j<i and Ai > Bi.

void helper(vector<int> arr, int n, vector<vector<int>> &ans,map<vector<int>,int> &mp,int index){
    if(index==n){
        if(!mp[arr]){
            ans.push_back(arr);
        }
        return;
    }

    for(int i = index;i<n;i++){
        swap(arr[i],arr[index] );
        helper(arr,n,ans,mp,index+1);
        swap(arr[i],arr[index] );
    }

}

vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
    // code here
    vector<vector<int>> ans;
    map<vector<int>,int> mp;

    helper(arr,n,ans,mp,0);
    sort(ans.begin(),ans.end());

    return ans;

}

int main(){
    return 0;
}