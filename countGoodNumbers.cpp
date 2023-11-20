#define mod 1000000007
class Solution {
public:
    
    long long fastExponential(int n, long long r){
        
        if(r == 0)
            return 1;
        
        if(r == 1)
            return n;
        
        long long ans = fastExponential(n,r/2);
        ans*=ans;
        ans%=mod;
        
        if(r&1){
            ans*=n;
            ans%=mod;
        }
        return ans;
    }
    
    int countGoodNumbers(long long n) {
        long long odd = n/2;
        long long even = n/2 + n%2;
        return (fastExponential(5,even)*fastExponential(4,odd))%mod;
    }
};
