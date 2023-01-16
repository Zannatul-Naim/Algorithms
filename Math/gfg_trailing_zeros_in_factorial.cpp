class Solution
{
public:
    int trailingZeroes(int n)
    {
        // Write Your Code here
        
        int i = 1;
        int ans = 0;
        int x = pow(5, i);
        
        do {
            ans += n / x;
            i++;
            x = pow(5, i);
        } while(n/x);
        
        return ans;
    }
};
