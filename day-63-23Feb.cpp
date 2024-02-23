#include<bits/stdc++.h>
using namespace std;

// Buy and Sell a Share at most twice

// In daily share trading, a buyer buys shares in the morning and sells them on the same day. If the trader is allowed to make at most 2 transactions in a day, the second transaction can only start after the first one is complete (buy->sell->buy->sell). 
// The stock prices throughout the day are represented in the form of an array of prices. 
// Given an array price of size n, find out the maximum profit that a share trader could have made.


int maxProfit(vector<int>&prices)
{
            //Write your code here..
    int buy1 = INT_MIN, sell1 = 0, buy2 = INT_MIN, sell2 = 0;

    for(int price : prices) 
    {
        buy1 = max(buy1, -price);
        sell1 = max(sell1, buy1 + price);
        buy2 = max(buy2, sell1 - price);
        sell2 = max(sell2, buy2 + price);
    }

    return sell2;
}

int main(){

    return 0;
}