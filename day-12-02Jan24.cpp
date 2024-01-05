#include<bits/stdc++.h>
using namespace std;

// Largest Sum Subarray of Size at least K

// Given an array a of length n and a number k, find the largest sum of the subarray containing at least k numbers. It is guaranteed that the size of array is at-least k.


long long int maxSumWithK(long long int a[], long long int n, long long int k){
    vector<long long> dp (n + 1, 0);
    
    for (int i =n- 1; i > -1; i--) {
        dp[i] = a[i]+ dp[i + 1];
        dp[i] = max(dp[i], 0LL);
    }

    long long ans = -1e18;
    long long cur_sum = 0;
    
    for (int i = 0; i <k; i++)
        cur_sum += a[i];
    
    for (int i = k; i<n; i++) {
        long long sum = cur_sum + dp[i];
        ans = max(ans, sum);
        cur_sum += a[i];
        cur_sum -= a[i-k];
    }

    return max (ans, cur_sum);
}

int main(){
    return 0;
}