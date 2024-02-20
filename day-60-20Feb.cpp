#include<bits/stdc++.h>
using namespace std;

// Word Break

// Given a string s and a dictionary of n words dictionary, find out if a s can be segmented into a space-separated sequence of dictionary words. Return 1 if it is possible to break the s into a sequence of dictionary words, else return 0. 

// Note: From the dictionary dictionary each word can be taken any number of times and in any order.


int help(int i,string s,set<string>&dis){
    if(i==s.size())return 1;
    string temp;
    for(int j=i; j<s.size(); j++){
        temp+=s[j];
        if(dis.find(temp)!=dis.end()){
            if(help(j+1,s,dis))return 1;
        }
    }
    return 0;
}
int wordBreak(int n, string s, vector<string> &dictionary) {
    //code here
    set<string>st;
    for(auto a:dictionary){
        st.insert(a);
    }
    return help(0,s,st);
}


int main(){
    return 0;
}