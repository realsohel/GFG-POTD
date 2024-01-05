#include<bits/stdc++.h>
using namespace std;

// Winner of an election
// Given an array of n names arr of candidates in an election, where each name is a string of lowercase characters. A candidate name in the array represents a vote casted to the candidate. Print the name of the candidate that received the maximum count of votes. If there is a draw between two candidates, then print lexicographically smaller name.


vector<string> winner(string arr[],int n){ // its more time consuming
    // Your code here
    // Return the string containing the name and an integer
    // representing the number of votes the winning candidate got
    
    vector<int> result;
    map<string,int> mp;

    for(int i=0;i<n;i++) {
        mp[arr[i]]++;
    }

    vector<string> ans;
    string a="";
    int v=0;
    for(auto x:mp) {
        v=max(v,x.second);
    }

    for(auto x:mp) {
        if(x.second==v){
            a=x.first;
            break;
        } 
    }

    ans.push_back(a);
    ans.push_back(to_string(v));
    return ans;
}

vector<string> winner2(string arr[],int n) // It is more optimised..
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        vector<string>v;
        unordered_map<string,int>mp;
        string str="";
        int mx=0;
    
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto i:mp){
        mx=max(mx,i.second);
        }
    
        for(auto i:mp){
            if(mx==i.second){
                v.push_back(i.first);
            }
        }
        sort(v.begin(),v.end());
    
        str=to_string(mx);
    
        return {v[0],str};
    }

int main(){
    return 0;
}