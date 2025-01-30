
// Q. You are given an array arr of positive integers. Your task is to find all the leaders in the array. An element is considered a leader if it is greater than or equal to all elements to its right. The rightmost element is always a leader.
// A. The solution is to iterate the array from right to left and keep track of the maximum element found so far. If the current element is greater than or equal to the maximum element found so far, then it is a leader. 

// The algorithm is as follows - 
// 1. Initialize a vector to store the leaders.
// 2. Iterate the array from right to left. 
// 3. Keep track of the maximum element found so far.
// 4. If the current element is greater than or equal to the maximum element found so far, then it is a leader.
// 5. Reverse the vector and return it.

// The time complexity of the solution is O(n) where n is the size of the array.
// The space complexity of the solution is O(1).

#include<bits/stdc++.h>
using namespace std;

// Optimized
// time complexity: O(n + n ) = O(n)
// space complexity: O(1)
vector<int> leaders(vector<int>& arr) {
    // Code here
    vector<int> ans;
    int n = arr.size();
    ans.push_back(arr[n-1]);
    
    for(int x =n-2;x>=0; x--){ // O(n)
        if(arr[x]>=ans.back()){
            ans.push_back(arr[x]);
        }
    }
    
    reverse(ans.begin(),ans.end()); // O(n)
    return ans;
}

// Brute Force
// time complexity: O(n^2)
// space complexity: O(1)
// Time Limit Exceeded
// vector<int> leaders(vector<int>& arr) {
//     // Code here
//     vector<int> ans;
//     int n = arr.size();
    
//     for(int i=0;i<n-1;i++){
//         for(int j=n-1;j>=i;j--){
//             if(arr[j]>arr[i]){
//                 break;
//             }
//             else{
//                 if(j==i)
//                     ans.push_back(arr[i]);
//             }
//         }
//     }
//     ans.push_back(arr[n-1]);
//     return ans;
// }

int main(){

    return 0;
}