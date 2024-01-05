#include<bits/stdc++.h>
using namespace std;

// Smallest window containing 0, 1 and 2
// Given a string S consisting of the characters 0, 1 and 2. Your task is to find the length of the smallest substring of string S that contains all the three characters 0, 1 and 2. If no such substring exists, then return -1.

int smallestSubstring(string S){
    // Code here
    vector<int> f(3,0);
    int l=0;
    int r=0;
    bool ok = 0;
    int ans = 1e8;

    while (r < S.size() || l<r){
        
        if(!ok && r<S.size()){
            ++f[S[r++]-'0'];
            
            if(f[0] && f[1] && f[2]){
                ok=1;
            }
            else{
                ok=0;
            }
        }
        else if(l<r){
            --f[S[l++]-'0'];
            
            if(f[0] && f[1] && f[2]){
                ok=1;
            }
            else{
                ok=0;
            }
        }
        if(ok){
            ans = min(ans,r-l);
        } 
    }

    return ans == 1e8 ? -1 :ans;
    
}
int main(){
    return 0;
}