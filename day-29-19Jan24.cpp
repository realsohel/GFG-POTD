#include<bits/stdc++.h>
using namespace std;

// Top k numbers in a stream
// Given N numbers in an array, your task is to keep at most the top K numbers with respect to their frequency.

// In other words, you have to iterate over the array, and after each index, determine the top K most frequent numbers until that iteration and store them in an array in decreasing order of frequency. An array will be formed for each iteration and stored in an array of arrays. If the total number of distinct elements is less than K, then keep all the distinct numbers in the array. If two numbers have equal frequency, place the smaller number first in the array.

vector<vector<int>> kTop(vector<int>& arr, int N, int k) {
    vector<vector<int>> res;
    unordered_map<int, int> mp;
    set<pair<int, int>> s;
    
    for(auto i: arr) {
        vector<int> row;
        if(mp[i] > 0)
            s.erase({-mp[i], i});
            
        mp[i]++;
        s.insert({-mp[i], i});
        
        int t = 1;
        for(auto j: s) {
            if(t > k)
                break;
                
            row.push_back(j.second);
            t++;
        }
        
        res.push_back(row);
    }

    return res;

}
int main(){
    
    return 0;
}