
const int N = 1001, W = 1001;
int dp[N][W];
class Solution
{
    public:
    
    int knapSack2(int w, int wt[], int val[], int n) 
    { 
       if(w == 0 or n == 0) return 0;
       if(dp[n][w] != -1) return dp[n][w];
       if(w >= wt[n-1]) {
           return dp[n][w] = max(val[n-1]+knapSack2(w-wt[n-1], wt, val, n-1), knapSack2(w, wt, val, n-1));
       } else {
           return dp[n][w] = knapSack2(w, wt, val, n-1);
       }
    }
    int knapSack(int w, int wt[], int val[], int n) {
        memset(dp, -1, sizeof(dp));
        return knapSack2(w, wt, val, n);
    }
};
