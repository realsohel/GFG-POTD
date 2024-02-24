#include<bits/stdc++.h>
using namespace std;

// Maximum Sum Problem
// A number n can be broken into three parts n/2, n/3, and n/4 (consider only the integer part). Each number obtained in this process can be divided further recursively. Find the maximum sum that can be obtained by summing up the divided parts together.
// Note: It is possible that we don't divide the number at all.


int solve(int n){
    int sum = (n/2)+(n/3)+(n/4);
    if(sum>n)
    {
    
    int a = solve(n/2);
    int b = solve(n/3);
    int c = solve(n/4);
    
    int sum2 = a+b+c;
    
    return max(sum,sum2);
    
    }
    else{
        return n;
    }
}
    
int maxSum(int n){
    return solve(n);           
}
int main(){
    return 0;
}