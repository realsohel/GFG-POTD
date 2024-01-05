// Given two strings wild and pattern. Determine if the given two strings can be matched given that, wild string may contain * and ? but string pattern will not. * and ? can be converted to another character according to the following rules:

// * --> This character in string wild can be replaced by any sequence of characters, it can also be replaced by an empty string.
// ? --> This character in string wild can be replaced by any one character.

#include <bits/stdc++.h>
using namespace std;

bool match(string wild, string pattern){
    int n = wild.size();
    int m = pattern.size();

    vector<vector<int>> dp(n+1 , vector<int> (m+1,0));
    dp[n][m]=1;

    for(int  i=n-1; i > -1; i--){
        for(int j = m-1; j > -1; j--){
            
            if(wild[i]=='?'){
                dp[i][j] = dp[i+1][j+1];
            }
            else if(wild[i]=='*'){
                if(i==n-1){
                    dp[i][j]=1;
                }
                else{
                    dp[i][j] = dp[i+1][j] || dp[i][j+1];
                }
            }
            else{
                if(wild[i]==pattern[j]){
                    dp[i][j] = dp[i+1][j+1];
                }
                else{
                    dp[i][j]=0;
                }
            }
        }
    }
    return dp[0][0];
}

int main(){
    return 0;
}
