class Solution {
public:

    bool binary_search(vector < int > &v, int n) {
        int low = 0;
        int high = v.size() - 1;
        int mid;
        while(low <= high) {
            mid = (low + high) / 2;
            if(v[mid] > n) high = mid - 1;
            else if(v[mid] < n) low = mid + 1;
            else return true;
        }
        return false;
    }

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector < int > v;
        set < int > s;
        sort(nums1.begin(), nums1.end());
        for(auto i : nums2) {
            if(binary_search(nums1, i)) s.insert(i);
        }

        for(auto i : s) v.push_back(i);

        return v;
    }
};
