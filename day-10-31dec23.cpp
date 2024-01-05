#include<bits/stdc++.h>
using namespace std;

// New Year Resolution


// As the clock struck midnight on New Year's Eve, Geek bid farewell to the wasted moments of 2023, realizing the untapped potential of GFG's Problem of the Day.

// His 2024 resolution: Solve POTD every day.

// Eager to earn coins for GFG Merchandise, Geek faces new rules:

// Earning Coin: Geek can accumulate coins[i] by solving the POTD on the ith day, where 1 <= coins[i] <= 2024 and the sum of coins <= 2024.
// Merchandise Eligibility: To purchase merchandise, the coins earned must be divisible by 20 or 24, or precisely equal to 2024.
// Geek's resolutions often fades over time. Realistically, he can only commit to active participation for N (where N ≤ 366) days. Given the value of N and number of coins associated with each POTD, can Geek strategically solve some (or all) POTDs to become eligible for redeeming merchandise?

int isPossible(int N , int coins[]){
    vector<vector<int>> dp(N + 1, vector<int> (2025, 0));
    for(int i = 20; i < 2025; i += 20)
        dp[N][i] = 1;

    for(int i= 24; i< 2025; i+=24)
        dp[N][i] = 1;

    dp[N][2024] = 1;

    for(int i = N - 1; i > -1; i--){
        for(int j = 0; j < 2025; j++){
            int take, notake = 0;
            notake = dp[i + 1][j];

            if(coins[i] + j<2025)
                take  = dp[i+1][j + coins[i]];
            
            dp[i][j]=max(take,notake);
        }
    }
    return dp[0][0];
}

int main(){
    return 0;
}