#include<bits/stdc++.h>
using namespace std;

// Power Sett

// Given a string s of length n, find all the possible subsequences of the string s in lexicographically-sorted order.

// Subsequence of a given striing: 2 to raise to n -1... n => length of string 

void help(string s,int index,vector<string> &ans, string temp){
    if(index==s.length()){
        if(temp.length()){
            ans.push_back(temp);
        }
        return ;
    }

    help(s,index+1,ans,temp);
    temp+=s[index];
    help(s,index+1,ans,temp);
}
vector<string> AllPossibleStrings(string s){
    // Code here
    vector<string> ans;
    help(s,0,ans,"");

    sort(ans.begin(),ans.end());
    return ans;
}

int main(){

    return 0;
}