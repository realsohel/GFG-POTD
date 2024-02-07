#include<bits/stdc++.h>
using namespace std;

// Min distance between two given nodes of a Binary Tree

// Given a binary tree with n nodes and two node values, a and b, your task is to find the minimum distance between them. The given two nodes are guaranteed to be in the binary tree and all node values are unique.


struct Node
{
    int data;
    Node* left, * right;
}; 

class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/

    void helper(Node* root, vector<int> &currPath,vector<int> &PathA,vector<int> &  PathB,int a,int b){
        if(!root)
            return;
        
        currPath.push_back(root->data);

        if(root->data==a)
            PathA = currPath;
        if(root->data==b)
            PathB = currPath;
        
        helper(root->left,currPath,PathA,PathB,a,b);
        helper(root->right,currPath,PathA,PathB,a,b);

        currPath.pop_back();
    }

    int findDist(Node* root, int a, int b) {
        // Your code here
        vector<int> currPath,pathA,pathB;
        helper(root,currPath,pathA,pathB,a,b);

        int i=0,j=0;
        while(i <pathA.size() && j<pathB.size()){
            if(pathA[i]!=pathB[j])
                break;
            i++;
            j++;
        }
        return ((pathA.size()-i)+(pathB.size()-j));
    }
};

int main(){
    return 0;
}