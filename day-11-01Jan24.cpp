#include<bits/stdc++.h>
using namespace std;

// Array Pair Sum Divisibility Problem

// Given an array of integers nums and a number k, write a function that returns true if given array can be divided into pairs such that sum of every pair is divisible by k.

bool canPair(vector<int> nums, int k) {
        // Code here.
    map<int,int> mp;

    for(int i=0;i<nums.size();i++){
        int curr = nums[i] % k;
        int find = (k-curr) % k ;

        if(mp.count(find)){
            --mp[find];

            if(mp[find]==0){
                mp.erase(find);
            }
        }
        else{
            ++mp[curr];
        }
    }

    return mp.size()==0;
    
    
    }

int main(){
    return 0;
}