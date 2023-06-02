class Solution {
    
public:

    int minAbsDifference(vector<int>& nums, int goal) {
        
        int n = nums.size();

        vector < int > s1, s2;

        for(int i = 0; i < n/2; i++) s1.push_back(nums[i]);
        for(int i = n/2; i<n; i++) s2.push_back(nums[i]);

        vector <int> first, second;
        int x = s1.size();
        int y = s2.size();
        
        for(int i = 0; i < (1 << x); i++) {
            int sum = 0;
            for(int j = 0; j < x; j++) {
                if(i and (1 << j)) sum += s1[j];
            }
            first.push_back(sum);
        }
        for(int i = 0; i < (1 << y); i++) {
            int sum = 0;
            for(int j = 0; j < y; j++) {
                if(i and (1 << j)) sum += s2[j];
            }
            second.push_back(sum);
        }

        int ans = INT_MAX;
        sort(second.begin(), second.end());

        for(auto a : first) {
            int l = 0;
            int r = second.size()-1;

            while(l <= r) {
                int mid = (l+r)/2;
                int sum = a + second[mid];
                if(sum == goal) return 0;

                ans = min(ans, abs(sum-goal));

                if(sum > goal) r = mid-1;
                else l = mid+1;
            }
        }
        return ans;

    }
};
