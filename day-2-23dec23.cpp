// Given an array arr of size N and an element k. The task is to find the count of elements in the array that appear more than n/k times.

#include <bits/stdc++.h>
using namespace std;

int countOccurence(int arr[], int n, int k) { //using hashmap
        // Your code here
    unordered_map<int,int> ans;
    for(int i=0;i<n;i++)
    ans[arr[i]]++;
    
    
    int count = 0;
    for (auto i = ans.begin(); i != ans.end(); i++) {
        if (i->second > (n / k)){
            count++;
        }
    }
    return count;
}

int main(){

}