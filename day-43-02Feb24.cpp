#include<bits/stdc++.h>
using namespace std;

// Implement Atoi

// Given a string, s, the objective is to convert it into integer format without utilizing any built-in functions. If the conversion is not feasible, the function should return -1.

// Note: Conversion is feasible only if all characters in the string are numeric or if its first character is '-' and rest are numeric.

int atoi(string s) {
    //Your code here
    
    int ans = 0;
    for(int i=0; i<s.length();i++){
        if(i==0 && s[i]=='-'){
            continue;
        }
        
        // int num = s[i] - '0';
        if(s[i]>='0' && s[i]<='9'){
            ans= ans* 10 +(s[i] - '0') ;
        }
        else{
            return -1;
        }
        
    } 
    if(s[0]=='-'){
            ans=ans*-1;
    }
    return ans;
}


int main(){
    return 0;
}