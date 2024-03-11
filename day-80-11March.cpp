#include<bits/stdc++.h>
using namespace std;

// Count pairs Sum in matrices
// Given two sorted matrices mat1 and mat2 of size n x n of elements. Each matrix contains numbers arranged in strictly ascending order, with each row sorted from left to right, and the last element of a row being smaller than the first element of the next row. You're given a target value, x, your task is to find and count all pairs {a, b} such that a is from mat1 and b is from mat2 where sum of a and b is equal to x.

int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
{
    // Your code goes here
        int col1=0,col2=n-1;
    int row1=0,row2=n-1;
    int count=0;
    while(col1<n && col2>=0){
        int sum = mat1[col1][row1]+mat2[col2][row2];
        if(sum>x){
            row2--;
        }
        else if(sum<x){
            row1++;
        }
        else{
            count++;
            row1++;
            row2--;
        }
        if(row1==n){
            row1=0;
            col1++;
        }
        if(row2==-1){
            row2=n-1;
            col2--;
        }
    }
    return count;
}

int main(){
    return 0;
}