// Question: Given an array arr[ ] of size N having distinct elements, the task is to find the next greater element for each element of the array in order of their appearance in the array.
// Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
// If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.

// Answer: The idea is to use a stack to store the elements of the array.
// We iterate the array from right to left and for each element, we pop the elements from the stack until we find an element greater than the current element.  
// If we find an element greater than the current element, we store it in the answer array. If we don't find any element greater than the current element, we store -1 in the answer array.
// Time Complexity: O(n)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

// Optimized
// TIME = O(N)
// SPACE = O(N)
vector<int> nextLargerElement(vector<int>& arr) {
    // code here
    int n = arr.size();
    vector<int> ans(n);
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=st.top();
        }
        st.push(arr[i]);
    }
    return ans;
}

// BRUTE FORCE
// TIME = O(N*N)
// SPPACE = O(N)
// vector<int> nextLargerElement(vector<int>& arr) {
//     // code here
//     int n = arr.size();
//     for(int i=0;i<n;i++){
//         int temp=arr[i];
//         for(int j=i+1;j<n;j++){
//             if(arr[j]>arr[i]){
//                 arr[i]=arr[j];
//                 break;
//             }
//         }
        
//         if(arr[i]==temp)
//             arr[i]=-1;
//     }
    
//     return arr;
// }

int main(){

    return 0;
}