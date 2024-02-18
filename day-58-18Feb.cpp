#include<bits/stdc++.h>
using namespace std;

// Sum of leaf nodes in BST

// Given a Binary Search Tree with n nodes, find the sum of all leaf nodes. BST has the following property (duplicate nodes are possible):

// The left subtree of a node contains only nodes with keys less than the node’s key.
// The right subtree of a node contains only nodes with keys greater than or equal to the node’s key.
// Your task is to determine the total sum of the values of the leaf nodes.

// Note: Input array arr doesn't represent the actual BST, it represents the order in which the elements will be added into the BST.


struct Node{
    int data;
    Node *left,*right;
}; 


// KHUDSE KIYAA...
class Solution
{
    public:
        /*You are required to complete below method */
        void sumNode(Node *root, int &ans){
            if(!root){
                ans+=ans;
            }

            sumNode(root->left,ans);
            sumNode(root->right,ans);
        }
        int sumOfLeafNodes(Node *root ){
             /*Your code here */
            int ans =0;
            sumNode(root, ans);
            return ans;
        }
};


int main(){
    return 0;
}