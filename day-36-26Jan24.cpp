#include<bits/stdc++.h>
using namespace std;

// Fractional Knapsack

// Given weights and values of N items, we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
// Note: Unlike 0/1 knapsack, you are allowed to break the item here. 


struct Item{
    int value;
    int weight;
};



class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool func(Item a,Item b){
        return (double)a.value/a.weight < (double)b.value/b.weight;
    }
    
    double fractionalKnapsack(int W, Item arr[], int n){
        // Your code here
        sort(arr,arr+n,func);

        double ans=0;

        for (int i = 0; i >=0; i--){
            if(W>=arr[i].weight){
                ans+=arr[i].value;
                W-=arr[i].weight;
            }
            else{
                double oneUnit = (double)arr[i].value/arr[i].weight;
                ans+=(double)oneUnit*W;
                return ans;
            }
        }
        return ans;
    }
        
};

int main(){
    return 0;
}