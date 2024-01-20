#include<bits/stdc++.h>
using namespace std;

// Distribute candies in a binary tree
// Given a binary tree with N nodes, in which each node value represents number of candies present at that node. In one move, one may choose two adjacent nodes and move only one candy from one node to another (the move may be from parent to child, or from child to parent.) 
// The task is to find the number of moves required such that every node has exactly one candy.
// Note that the testcases are framed such that it is always possible to achieve a configuration in which every node has exactly one candy, after some moves.


struct Node {
	int key;
	Node *left, *right;
};

int helper(Node *root,int &ans){
    if(!root){
        return 0;
    }

    int l = helper(root->left,ans);
    int r = helper(root->right,ans);

    ans +=abs(l)+abs(r);
    return root->key-1+l+r;
}

int distributeCandy(Node* root){
    //code here
    int ans =0;
    helper(root,ans);
    return ans;
}
int main(){
    return 0;
}