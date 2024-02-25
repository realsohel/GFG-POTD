#include<bits/stdc++.h>
using namespace std;

// Reach a given score

// Consider a game where a player can score 3 or 5 or 10 points in a move. Given a total score n, find number of distinct combinations to reach the given score.

long long int count(long long int n){
    // Your code here
    long long int ans=0;
    for(int i=0;i<=n;i+=3){
        ans+=(n-i)%5 ? 0 :(n-i)/10+1;
    }
    return ans;
}
int main(){

    return 0;
}