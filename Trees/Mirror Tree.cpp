// Q. Given a binary tree, your task is to convert the binary tree into its mirror tree.
// A. The solution is to recursively swap the left and right child of each node in the binary tree.
//  The algorithm is as follows -
// 1. If the node is NULL, return.
// 2. Swap
// 3. Recursively call the function on the left child.
// 4. Recursively call the function on the right child.
// time complexity: O(n) 
// space complexity: O(1)


#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};


class Solution {
public:
    void mirror(Node* node) {
        if(!node) return;

        swap(node->left,node->right);
        mirror(node->left);
        mirror(node->right);
    }
};

int main(){

    return 0;
}