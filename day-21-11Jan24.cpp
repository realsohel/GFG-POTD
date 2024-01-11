#include<bits/stdc++.h>
using namespace std;

// Remove K Digits
// Given a non-negative integer S represented as a string, remove K digits from the number so that the new number is the smallest possible.
// Note : The given num does not contain any leading zero.

string removeKdigits(string s, int k) {
    pair<int,int> last = {0,k};
    int n = s.size();
    int indx = 0;

    while(indx<n){
        if(s[indx]!='0'){
            if(k){
                --k;
            }
            else
                break;
            indx++;
        }
        else{
            while (indx < n && s[indx]=='0'){
                indx++;
            }
            last = {indx,k};
            
        }
    }

    stack<int> num;
    int start =  last.first;
    k = last.second;

    for (int i = start; i<n; i++){
        while (num.size() && num.top() > (s[i] - '0') && k ) {
        --k;
        num.pop();
        }
        num.push(s[i]- '0');
    }

    while(num.size() && k--){
        num.pop();
    }

    string ans = "";
    
    while(num.size()){
        ans+=to_string(num.top());
        num.pop();
    }
    
    reverse(ans.begin(), ans.end());
    if(ans == "")
    ans = "0";
    
    return ans;
}


int main(){
    return 0;
}