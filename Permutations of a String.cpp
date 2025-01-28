//  Q. Given a string s, which may contain duplicate characters, your task is to generate and return an array of all unique permutations of the string. You can return your answer in any order.

// A. The solution is to use the backtracking technique. The algorithm is as follows
// 1. Initialize a set to store all the unique permutations.
// 2. Define a recursive function recurPermute that takes the current index, the string, and the set as arguments.
// 3. If the index is equal to the size of the string, insert the string into the set.
// 4. Swap the current index with all possible indices and recur.
// 5. Return the vector of all unique permutations.

// 6. The time complexity of the solution is O(N!) where N is the length of the string.
// 7. The space complexity of the solution is O(N!).

#include<bits/stdc++.h>
using namespace std;

void recurPermute(int index, string &s,set<string> &st) {

    // Base Case
    if (index == s.size()) {
        st.insert(s);
        return;
    }

    // Swap the current index with all
    // possible indices and recur
    for (int i = index; i < s.size(); i++) {
        swap(s[index], s[i]);
        recurPermute(index + 1, s, st);
        swap(s[index], s[i]);
    }
}
    
vector<string> findPermutation(string s) {
    // Code here there
    set<string> st;
    vector<string> ans;

    recurPermute(0, s, st);
    
    for(auto x:st)
        ans.push_back(x);
    
    return ans;
}

int main(){

    vector<string> ans = findPermutation("abc");

    for(auto x:ans)
        cout<<x<<" ";
    return 0;
}