#include<bits/stdc++.h>
using namespace std;

// Swap the array elements

// Given an array arr of n positive integers. The task is to swap every ith element of the array with (i+2)th element.

//   KHUDSE KIYAA...
void swapElements(int arr[], int n){
    
    // Your code here
    for(int i=0;i<n-2;i++){
        int a = arr[i+2];
        arr[i+2] = arr[i];
        arr[i] = a;
        
    }
    
}

int main(){
    return 0;
}