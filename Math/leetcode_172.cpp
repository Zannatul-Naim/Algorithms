class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0;
        int i = 1;
        int x = pow(5, i);;
        do { 
            ans += n / x;
            i++;
            x = pow(5,i);
        } while(n/x);

        return ans;
    }
};
