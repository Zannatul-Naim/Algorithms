class Solution {
public:
    int firstBadVersion(int n) {
        long long low = 1;
        long long high = n;
        long long mid = (low + high) / 2;
        while(low <= high)  {
            if(isBadVersion(mid)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
            mid = (low + high) / 2;
        }
        return low;
    }
};
