#include<bits/stdc++.h>
using namespace std;

// Does array represent Heap
// Given an array arr of size n, the task is to check if the given array can be a level order representation of a Max Heap.

bool isMaxHeap(int arr[], int n){
    // Your code goes here
    int child = 1;

    for(int i=0;i<n;i++){
        if(child<n and arr[child]>arr[i])
            return false;
        if(child+1<n and arr[child+1]>arr[i])
            return false;
        
        child+=2;
    }

    return true;
}

int main(){
    return 0;
}