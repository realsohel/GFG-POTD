#include<bits/stdc++.h>
using namespace std;

// Flatten BST to sorted list

// You are given a Binary Search Tree (BST) with n nodes, each node has a distinct value assigned to it. The goal is to flatten the tree such that, the left child of each element points to nothing (NULL), and the right child points to the next element in the sorted list of elements of the BST (look at the examples for clarity). You must accomplish this without using any extra storage, except for recursive calls, which are allowed.

// Note: If your BST does have a left child, then the system will print a -1 and will skip it, resulting in an incorrect solution.


class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};


class Solution
{
public:
    Node *ans=NULL,*prev=NULL;
    void help(Node *root){

        if(!root)
            return;
        help(root->left);
        if(prev){
            prev->left=NULL;
            prev->right=root;
        }
        else{
            ans=root;
        }
        prev=root;

        help(root->right);
        prev->left=NULL;
    }

    Node *flattenBST(Node *root){
        // code here
        help(root);
        return ans;
    }
};
int main(){
    return 0;
}