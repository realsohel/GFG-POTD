#include<bits/stdc++.h>
using namespace std;

// Techfest and the Queue
// A Techfest is underway, and each participant is given a ticket with a unique number. Organizers decide to award prize points to everyone who has a ticket ID between a and b (inclusive). The points given to a participant with ticket number x will be the sum of powers of the prime factors of x.

// For instance, if points are to be awarded to a participant with ticket number 12, the amount of points given out will be equal to the sum of powers in the prime factorization of 12 (22 × 31), which will be 2 + 1 = 3.

// Given a and b, determine the sum of all the points that will be awarded to the participants with ticket numbers between a and b (inclusive).

int helper(int num,vector<int> &count){
    if(num==1) return 0;
    if(count[num]!=-1) return count[num];
    int ans=0;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            int temp=num/i;
            ans=1+helper(temp,count);
            count[num]=ans;
            return ans;
        }
    }
    return 1;
}
    
int sumOfPowers(int a, int b){
    // Code here
    int ans=0;
    vector<int> count(b+1,-1);
    for(int num=b;num>=a;num--){
        if(count[num]==-1){
            ans+=helper(num,count);
        }
        else ans+=count[num];
    }
    return ans;
}

int main(){
    return 0;
}