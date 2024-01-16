#include<bits/stdc++.h>
using namespace std;

// Sequence of Sequence
// Given two integers m and n, try making a special sequence of numbers seq of length n such that

// seqi+1 >= 2*seqi 
// seqi > 0
// seqi <= m
// Your task is to determine total number of such special sequences possible.

int numberSequence(int m, int n){
    if (n==0){
        return 1;
    }
    if(2*m<n){
        return 0;
    }
    return numberSequence(m/2,n-1)+numberSequence(m-1,n);
}
int main(){
    return 0;
}