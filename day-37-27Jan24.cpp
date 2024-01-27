#include<bits/stdc++.h>
using namespace std;


// Brackets in Matrix Chain Multiplication

// Given an array p[] of length n used to denote the dimensions of a series of matrices such that the dimension of i'th matrix is p[i] * p[i+1]. There are a total of n-1 matrices. Find the most efficient way to multiply these matrices together. 
// As in MCM, you were returning the most effective count but this time return the string which is formed of A - Z (only Uppercase) denoting matrices & Brackets( "(" ")" ) denoting multiplication symbols. For example, if n =11, the matrixes can be denoted as A - K as n<=26 & brackets as multiplication symbols.

// NOTE:

// Each multiplication is denoted by putting open & closed brackets to the matrices multiplied & also Please note that the order of matrix multiplication matters, as matrix multiplication is non-commutative A*B != B*A
// As there can be multiple possible answers, the console would print "True" for the correct string and "False" for the incorrect string. You need to only return a string that performs a minimum number of multiplications

class Solution{
public:
    string matrixChainOrder(int arr[], int N){
        // code here
         vector<vector<int>> dp(N, vector<int>(N, 0));

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i == j)
                    dp[i][j] = 0;
            }
        }

        vector<vector<int>> bracket(N, vector<int>(N, 0));

        for (int l = 2; l < N; l++) {
            for (int i = 1; i < N - l + 1; i++) {
                int j = i + l - 1;
                dp[i][j] = INT_MAX;

                for (int k = i; k < j; k++) {
                    int cost = dp[i][k] + dp[k + 1][j] + arr[i - 1] * arr[k] * arr[j];
                    if (cost < dp[i][j]) {
                        dp[i][j] = cost;
                        bracket[i][j] = k;
                    }
                }
            }
        }

        return printParenthesis(1, N - 1, bracket);
    }

private:
    string printParenthesis(int i, int j, vector<vector<int>>& bracket) {
        if (i == j)
            return string(1, 'A' + i - 1);

        return "(" + printParenthesis(i, bracket[i][j], bracket) + printParenthesis(bracket[i][j] + 1, j, bracket) + ")";
    }
    
};
int main(){
    return 0;
}