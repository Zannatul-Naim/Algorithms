class Solution
{
public:
    int trailingZeroes(int N)
    {
        int ans = 0, x = 5;
        
        do {
           ans += (N / x);
           x *= 5;
        } while(N / x);
        
        return ans;
    }
};
