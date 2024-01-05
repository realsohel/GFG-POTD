// In a stock market, there is a product with its infinite stocks. The stock prices are given for N days, where price[i] denotes the price of the stock on the ith day.
// There is a rule that a customer can buy at most i stock on the ith day.
// If the customer has an amount of k amount of money initially. The task is to find out the maximum number of stocks a customer can buy.

#include <bits/stdc++.h>
using namespace std;

int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        vector<pair<int,int>> info(n);

        for(int i=0;i<n;i++){
            info[i].first = price[i];
            info[i].second = i+1;  // +1 isliye coz 0 based se 1 based me convert krna hai.
            
        }

        sort(info.begin(),info.end());
        int ans =0;

        for(int i=0;i<n;i++){
            int qty = k/info[i].first;
            qty=min(qty,info[i].second);
            
            ans +=qty;
            k -= qty * info[i].first;

        }

        return ans;
    }

int main(){

    return 0;
}