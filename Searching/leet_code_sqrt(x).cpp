class Solution {
public:
    int mySqrt(int x) {
        long long low = 0;
        long long high = x/2;
        long long mid = (low + high) / 2;
        while(low <= high) {
            
            if(mid*mid < x) {low = mid + 1;}
            else if(mid*mid > x) {high = mid - 1;}
            else break;
            mid = (low + high) / 2;
        }
        return x==1?1:mid;
    }
};
