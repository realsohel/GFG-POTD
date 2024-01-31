#include<bits/stdc++.h>
using namespace std;

// Insert and Search in a Trie

// Complete the Insert and Search functions for a Trie Data Structure. 

// Insert: Accepts the Trie's root and a string, modifies the root in-place, and returns nothing.
// Search: Takes the Trie's root and a string, returns true if the string is in the Trie, otherwise false.
// Note: To test the correctness of your code, the code-judge will be inserting a list of N strings called into the Trie, and then will search for the string key in the Trie. The code-judge will generate 1 if the key is present in the Trie, else 0.


struct TrieNode {
    struct TrieNode *children[ALPHABET_SIZE];

    // isLeaf is true if the node represents
    // end of a word
    bool isLeaf;
};


void insert(struct TrieNode *root, string key){
    // code here
    for(auto i:key){
        if(root->children[i-'a']){
            root = root->children[i-'a'];
        }
        else{
            TrieNode *new_node = getNode();
            root->children[i - 'a'] =  new_node;
            root = new_node;
        }
    }

    root->isLeaf = 1;
}

//Function to use TRIE data structure and search the given string.
bool search(struct TrieNode *root, string key){
    // code here
    for(auto i:key){
        if(root->children[i-'a']){
            root = root->children[i-'a'];
        }
        else{
            return 0;
        }
    }

    return root->isLeaf;
}
int main(){
    return 0;
}