#include<bits/stdc++.h>
using namespace std;

// Water the plants

// A gallery with plants is divided into n parts, numbered 0, 1, 2, 3, ..., n-1. There are provisions for attaching water sprinklers in every division. A sprinkler with range x at division i can water all divisions from i-x to i+x.

// Given an array gallery[] consisting of n integers, where gallery[i] is the range of the sprinkler at partition i (a power of -1 indicates no sprinkler attached), return the minimum number of sprinklers that need to be turned on to water the entire gallery. If there is no possible way to water the full length using the given sprinklers, print -1.

int min_sprinklers(int gallery[], int n){
    // code here
    vector<pair<int,int>>v;
    
    for(int i=0;i<n;i++){
        if(gallery[i]!=-1){
            v.push_back({i-gallery[i], i+gallery[i]});
        }
    }
    int m=v.size();
    sort(v.begin(), v.end());
    int target=0, i=0, ans=0;
    while(target<n && i<m){
        if(v[i].first > target) return -1;
        
        int maxi=v[i].second; i++;
        while(i<m && v[i].first<=target){
            maxi=max(maxi, v[i].second);
            i++;
        }
        target=maxi+1;
        ans++;
    }
    if(target<n-1){
        return -1;
    }
    else{
        return ans;
    }
}

int main(){
    return 0;
}