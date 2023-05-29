const long long MOD = 1e9+7;
vector < long long > dp(1001LL, -1);

class Solution {
  public:
    
    long long int nthFibonacci(long long int n){
        
        if(dp[n] != -1) return dp[n];
        if(n <= 1) {
            return dp[n] = n;
        }
        
        return dp[n] = (nthFibonacci(n-1)%MOD+nthFibonacci(n-2)%MOD)%MOD;
        
    }
};
