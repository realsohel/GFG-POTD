// Q. Given an array arr of N positive integers, the task is to find the k largest elements in the array. The elements should be printed in descending order.

// A. The solution is to use a max heap. The algorithm is as follows
// 1. Create a max heap.
// 2. Insert all the elements of the array into the max heap.
// 3. Pop the top element of the max heap k times and store it in a vector.
// 4. The vector contains the k largest elements in descending order.
// 5. The time complexity of the solution is O(N*logK) where N is the number of elements in the array.
// 6. The space complexity of the solution is O(K) where K is the number of largest elements to be found.


#include<bits/stdc++.h>
using namespace std;

// Approach 2 - Usinh Max Heap
// Time Complexity = O(n*logk)
// Space Complexity = O(k)
vector<int> kLargest(vector<int>& arr, int k) {
    vector<int> ans;
    priority_queue<int,vector<int>> maxH;

    for(int i=0;i<arr.size();i++){
        maxH.push(arr[i]);
    }
    while(k--){
        ans.push_back(maxH.top());
        maxH.pop();
    }

    return ans;
}
// Time = O(n*logn)
// Space = O(1) --> Not considering the ans vector.
// vector<int> kLargest(vector<int>& arr, int k) {
//     // Your code
//     sort(arr.begin(),arr.end());
//     vector<int> ans;
//     int i = arr.size()-1;
//     while(k--){
//         ans.push_back(arr[i]);
//         i--;
//     }
    
//     return ans;
// }