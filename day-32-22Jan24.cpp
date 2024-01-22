#include<bits/stdc++.h>
using namespace std;

// Paths from root with a specified sum
// Given a Binary tree and a sum S, print all the paths, starting from root, that sums upto the given sum. Path not necessarily end on a leaf node.


// A Tree node
struct Node
{
	int key;
	struct Node *left, *right;
};

class Solution{
    public:

    void helper(Node* root,int s, vector<int> temp, int sum, vector<vector<int>> &ans){
        if(!root)
            return;
        
        s+=root->key;
        temp.push_back(root->key);
        if(s==sum){
            ans.push_back(temp);
        }

        helper(root->left,s,temp,sum,ans);
        helper(root->right,s,temp,sum,ans);
    }
    vector<vector<int>> printPaths(Node *root, int sum){
        //code here
        vector<vector<int>> ans;
        vector<int> temp;
        helper(root,0,temp,sum,ans);
        return ans;
    }
};

int main(){
    return 0;
}