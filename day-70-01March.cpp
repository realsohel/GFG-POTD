#include<bits/stdc++.h>
using namespace std;

// Peak element

// Given an 0-indexed array of integers arr[] of size n, find its peak element. An element is considered to be peak if it's value is greater than or equal to the values of its adjacent elements (if they exist). The array is guaranteed to be in ascending order before the peak element and in descending order after it.

// Note: The output will be 1 if the index returned by your function is correct; otherwise, it will be 0.

// KHUDSEE
int peakElement(int arr[], int n)
{

    int l=0,h=n-1;
    while(l<h){
        int mid = (l+h)/2;
        if(arr[mid]<arr[mid+1])
            l=mid+1;
        else
            h=mid;
    }
    return l;
}

int main(){

    return 0;
}