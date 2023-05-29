
vector < int >dp(1001);
class Solution {
public:

    int minCost(vector<int>&c, int n) {
        if(dp[n] != -1) return dp[n];
        if(n <= 1) return dp[n] = 0;
        if(n == 2) {
            return dp[n] = min(c[0],c[1]);
        }

        return dp[n] = min(minCost(c, n-1)+c[n-1], minCost(c, n-2)+c[n-2]);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        fill(dp.begin(), dp.end(), -1);
        return minCost(cost, cost.size());
    }
};
