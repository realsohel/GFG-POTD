

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
    void solve(Node *root, vector<int> &ans){
        if(!root)
            return;
        solve(root->left,ans);
        ans.push_back(root->data);
        solve(root->right,ans);
        
    }
    
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> ans;
        solve(root,ans);
        
        return ans;
    }
};

int main(){

    return 0;
}