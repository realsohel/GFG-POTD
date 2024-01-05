#include<bits/stdc++.h>
using namespace std;

// Check if a string is repetition of its substring of k-length

// Given a string s, check if it is possible to convert it into a string that is the repetition of a substring of length k. Conversion has to be done by following the steps mentioned below only once:

// 1. Select two indices i and j (zero-based indexing, i could be equal to j), such that i and j are divisible by k.
// 2. Select substrings of length k starting from indices i and j.
// 3. Replace substring starting at index i with substring starting at index j within the string.

int kSubstrConcat (int n, string s, int k){
    // Your Code Here
    if(n%k){
        return 0;
    }

    map<vector<int>,int> substr;
    vector<int> f(26,0);

    for(int i=0; i<n; i+=k){
        for(int j=i-k; j<i && j>-1; j++){
            --f[s[j]-'a'];
        }

        for(int j =i;j<i+k;j++){
            ++f[s[j]-'a'];
        }

        substr[f]++;
        if(substr.size()>2){
            return 0;
        }
    }

    int freq=(*substr.begin()).second;

    return (freq==1 || freq>= n/k -1);
}


int main(){
    return 0;
}