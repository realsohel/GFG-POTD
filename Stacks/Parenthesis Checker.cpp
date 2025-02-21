// Question:  Given a string s, composed of different combinations of '(' , ')', '{', '}', '[', ']', verify the validity of the arrangement.
// An input string is valid if:
// 1. Open brackets must be closed by the same type of brackets.
// 2. Open brackets must be closed in the correct order.

// Answer: The idea is to use a stack to store the opening brackets. 
// When a closing bracket is encountered, we check if the top of the stack contains the corresponding opening bracket. 
// If it does, we pop the top of the stack. If it doesn't, we return false. If the stack is empty at the end, we return true. Otherwise, we return false.
// Time Complexity: O(n)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string& s) {
    stack<int>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(st.empty()) return false;
            char top = st.top();
            if((s[i]==')' && top=='(') || (s[i]=='}' && top == '{') || (s[i]==']' && top == '[') ){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    return st.empty();
}