class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans = 1;

        int endpoint = INT_MAX;

        sort(points.begin(), points.end());

        for(auto i : points) {
            int x = i[0];
            int y = i[1];

            if(endpoint < x) {
                ans += 1;
                endpoint = y;
            } else {
                endpoint = min(endpoint, y);
            }
        }
        return ans;
    }
};
