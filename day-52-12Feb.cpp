#include<bits/stdc++.h>
using namespace std;

// Recursive sequence

// A function F is defined as follows F(n)= (1) +(2*3) + (4*5*6) ... upto n terms (look at the examples for better clarity). Given an integer n, determine the F(n).

// Note: As the answer can be very large, return the answer modulo 109+7.

long long sequence(int n){
    // code here
    long long ans =1, mod = 1e9+7, temp=2;
    int i =2;
    
    while(i<=n){
        int j=i;
        long long temp2 = 1;
        
        while(j--){
            temp2*=temp;
            temp2%=mod;
            temp++;
        }
        ans+=temp2;
        ans%=mod;
    }
    
    return ans;
}   
int main(){
    return 0;
}