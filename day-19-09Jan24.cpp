#include<bits/stdc++.h>
using namespace std;

// Search Pattern (KMP-Algorithm)

vector<int> prefix_func(string s){
    int n = (int)s.length();
    vector<int> p(n);
    for(int i=1;i<n;i++){
        int j = p[i-1];
        while(j>0 && s[i]!=s[j])
            j=p[j-1];
        if(s[i]==s[j]){
            j++;
        }

        p[i] = j;
    }
    return p;
}
vector <int> search(string pat, string txt){
    //code here
    string look = pat + '?' + txt;
    vector<int> kmp = prefix_func(look);
    vector<int> ans;

    int start = 2*pat.size();
    for (int i= start; i < look.size(); i++){
        if(kmp[i] == pat.size())
            ans.push_back(i - start + 1);
    }
    return ans;

}

int main(){

    return 0;
}