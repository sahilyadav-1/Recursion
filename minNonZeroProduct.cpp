#define mod 1000000007
class Solution {
public:
    long long fastExponential(long long n, long long r){
        
        if(r == 0)
            return 1;
        
        long long ans = fastExponential(n,r/2);
        ans=((ans%mod)*(ans%mod))%mod;
        
        if(r&1){
            ans=(ans%mod)*(n%mod);
        }
        return ans;
    }
    
    int minNonZeroProduct(int p) {
       
        long long value = pow(2,p);
        value = value - 1;
        
        return ((value%mod)*(fastExponential(value-1,value/2)%mod))%mod;     
    }
};
