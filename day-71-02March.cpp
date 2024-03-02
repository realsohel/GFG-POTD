#include<bits/stdc++.h>
using namespace std;

// First element to occur k times

// Given an array of n integers. Find the first element that occurs atleast k number of times.

int firstElementKTime(int n, int k, int a[]){
    unordered_map<int,int> mp;

    int ans =0;

    for(int i=0;i<n;i++){
        mp[a[i]]++;
        if(mp[a[i]]==k){
            ans = a[i];
            break;
        }
    }

    // for(auto itr = mp.begin();itr!=mp.end();itr++){
    //     if(itr->second>=k){
    //         ans = itr->first;
    //         break;
    //     }
    // }

    return ans;
}
int main(){
    int n = 7;
    int arr[] = {1,7,4,3,4,7,8};
    cout << firstElementKTime(n,2,arr);
}