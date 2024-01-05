#include<bits/stdc++.h>
using namespace std;


// Count possible ways to construct buildings

// There is a road passing through a city with N plots on both sides of the road. Plots are arranged in a straight line on either side of the road. Determine the total number of ways to construct buildings in these plots, ensuring that no two buildings are adjacent to each other. Specifically, buildings on opposite sides of the road cannot be adjacent.

// Using * to represent a plot and || for the road, the arrangement for N = 3 can be visualized as follows: * * * || * * *.

// Note: As the answer can be very large, print it mod 109+7.

int TotalWays(int N){
    // Code here
    const long long mod = 1e9 + 7;
	long long a = 1, b = 1, c = 0;
    for (int i = 1; i <= N; i++) {
        c = (a % mod + b % mod) % mod;
        a = b % mod;
        b = c % mod;
    }
    return static_cast<int>((c * c) % mod);
}
int main(){
    return 0;
}
