#include<bits/stdc++.h>
using namespace std;

// Longest subarray with sum divisible by K
// Given an array arr containing N integers and a positive integer K, find the length of the longest sub array with sum of the elements divisible by the given value K.

int longSubarrWthSumDivByK(int arr[], int n, int k)
{
    // Complete the function
    int mx = 0;
    int i = 0, j = 0, sum = 0;
    map<int, int> mp;
    while (j < n)
    {
        sum += arr[j];
        int r = sum%k;
        
        //condn1
        if(r<0)
        {
            r = r+k;
        }
        //condn2
        if(r==0)
        {
            mx = max(mx,j-i+1);
            
        }
        else if(r>0)   //condn3
        {
            if(mp.find(r) != mp.end())
            {
                mx = max(mx,j-mp[r]);
            }
            else
            {
                mp[r] = j;
            }
            
        }
        j++;
    }
    return mx;
}

int main(){

    return 0;
}