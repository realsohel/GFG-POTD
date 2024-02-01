#include<bits/stdc++.h>
using namespace std;

// Panagram Checking

// Given a string s check if it is "Panagram" or not.

// A "Panagram" is a sentence containing every letter in the English Alphabet.

// KHUDSE...
bool checkPangram (string s) {
        // your code here
        if(s.length()<26)
            return false;
        
        unordered_map<int,int> mp;

        for(auto x:s){
            if(x>='A' && x <='Z'){
                mp[x - 'A']++;
            }
            else if(x>='a' && x<='z'){
                mp[x -'a']++;
            }
        }

        if(mp.size()==26){
            return true;
        }else{
            return false;
        }

    }

int main(){
    return 0;
}