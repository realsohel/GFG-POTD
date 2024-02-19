#include<bits/stdc++.h>
using namespace std;


// Game with String

// Given a string s of lowercase alphabets and a number k, the task is to print the minimum value of the string after removal of k characters. The value of a string is defined as the sum of squares of the count of each distinct character present in the string. 

// Approach khudse kiya almost solved but phass gaya to help liya..
int minValue(string s, int k){
    unordered_map<char,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }

    priority_queue<int> pq;
    for(auto sm:mp){
        pq.push(sm.second);
    }

    while(k--){
        int front = pq.top();
        pq.pop();
        front--;
        pq.push(front);
    }
    
    int ans =0;
    while(pq.size()){
        int temp = pq.top();
        pq.pop();
        ans+=pow(temp,2);
    }

    return ans;
}

int main(){
    return 0;
}