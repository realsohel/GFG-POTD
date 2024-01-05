#include<bits/stdc++.h>
using namespace std;

// Find element occuring once when all other are present thrice

// Given an array of integers arr[] of length N, every element appears thrice except for one which occurs once.
// Find that element which occurs once.


// KHUDSE KIYAA....
int singleElement(int arr[] ,int N) {
    // code here
    map<int,int> mp;

    for(int i=0;i<N;i++){
        int key = arr[i];
        mp[key]++;
    }
    int ans =0;
    for(auto itr=mp.begin() ; itr!=mp.end() ;itr++){
        if (itr->second==1){
            ans = itr->first;
            break;
        }
    }

    return ans;
}
int main(){
    return 0;
}