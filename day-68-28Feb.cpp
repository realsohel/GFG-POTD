#include<bits/stdc++.h>
using namespace std;

// Check if a number is divisible by 8

// Given a string representation of a decimal number s, check whether it is divisible by 8.



    // KHUDSE KIYAAA...
int DivisibleByEight(string s){
    //code here
    int ans =0;

    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
            ans*=10;
            ans+=s[i];
        }
    }

    if(ans%8==0){
        return 1;
    }
    return -1;
}
int main(){
    cout << DivisibleByEight("55")<<endl;
    return 0;
}