#include<bits/stdc++.h>
using namespace std;

// Count digit groupings of a number
// Given a string str consisting of digits, you can divide it into sub-groups by separating the string into substrings. For example, "112" can be divided as {"1", "1", "2"}, {"11", "2"}, {"1", "12"}, and {"112"}.

// A valid grouping can be done if you are able to divide sub-groups where the sum of digits in a sub-group is less than or equal to the sum of the digits of the sub-group immediately right to it. Your task is to determine the total number of valid groupings that could be done for a given string.

vector<vector<int>>dp;

int solve(string&str, int start,int prevSum){
    if(start==str.size())return 1;
    int sum=0;
    int ans=0;
    for(int i=start;i<str.size();++i){
        sum+=str[i]-'0';
        if(sum>=prevSum){
            if(dp[start][i]==-1)dp[start][i]=solve(str,i+1,sum);
            ans+=dp[start][i];
        }
    }
    return ans;
}
int TotalCount(string str){
    // Code here
    dp=vector<vector<int>>(str.size(),vector<int>(str.size(),-1));
    return solve(str,0,0);
}
int main(){
    return 0;
}