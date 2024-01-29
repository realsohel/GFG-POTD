#include<bits/stdc++.h>
using namespace std;

// Geekina Hate 1s

// It is a universal fact that Geekina hates 1s however it is also known that Geekina loves the integers having atmost k 1s (set-bits) in their binary representation. 

// Geekina demanded nth such non-negative number from Geek, and being a good friend of Geek, now it's your responsibility to tell him that number.

// Note: The test cases are generated such that the answer always exists and will fit in the 64-bit data type.


 long long nCr(long long n, long long r) {
    
        if (r > n) return 0;
        if (r == 0 || n == r) return 1;
        double res = 0;
        for (long long i = 0; i < r; i++) {
            res += log(n-i) - log(i+1);
        }
        return (long long)round(exp(res));
    }
    
    
    long long no_bit_required(long long n,long long k)
    {
        long long l=1,r=64;
        long long ans=-1;
        while(l<=r)
        {
            long long mid=(l+r)/2;
            long long total=0;
            for(long long i=0;i<=k;i++)
            {
                total+=nCr(mid,i);
                if(total>n)
                break;
            }
            if(total>=n)
            {
                ans=mid;
                r=mid-1;
            }
            else
            l=mid+1;
            
        }
        return ans;
    }
    long long findNthNumber(int n, int k) {
        // code here
        long long len=no_bit_required(n,k);
        string ans="";
        n--;
        for(int pos=0;pos<len;pos++)
        {
            int rem=(len-pos)-1;
            long long total=0;
            for(long long i=0;i<=k;i++)
            {
                total+=nCr(rem,i);
            }
            if(total<=n)
            {
                n-=(total);
                ans+="1";
                k--;
            }
            else
            ans+="0";
        }
        // return ans;
        // cout<<ans</<" ";
        long long res=0;
        long long power=1;
        for(int i=len-1;i>=0;i--)
        {
            if(ans[i]=='1')
            res+=power;
            
            power=power*2;
        }
        return res;
    }

int main(){
    return 0;
}