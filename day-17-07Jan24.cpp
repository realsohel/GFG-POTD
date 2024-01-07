#include<bits/stdc++.h>
using namespace std;

// Split Array Largest Sum
// Given an array arr[] of N elements and a number K., split the given array into K subarrays such that the maximum subarray sum achievable out of K subarrays formed is minimum possible. Find that possible subarray sum.

int nofmaxsubarray( int arr[], int mid,int N){
    int count=1;
    int sum=0;
    
    for(int i=0;i<N;i++){    
        if(sum+arr[i]>mid){
            count++;
            sum=arr[i]; 
        }
        else 
        sum=sum+arr[i];
    }
    return count;
}

int splitArray(int arr[] ,int N, int K) {
    // code here
    
    int* max = max_element(arr, arr + N);
    int low = *max; 
    int high=0;

    for( int i=0;i<N;i++){ 
        high+=arr[i];
    }
    
    // now using the binary search logic -->
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        // make a function to count the noofmaxsubarrypresent ;
        int n=nofmaxsubarray(arr,mid,N);        

        if(n>K){// ye batayega minimum value ko jo ki humse nhi chye
            low=mid+1;
        }
        else{
            ans=mid;
            high=mid-1;
        }
    }
    
    return ans;
}

int main(){
    return 0;
}
