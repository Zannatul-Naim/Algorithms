class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map < int , int > mp;
        int ans = 0;

        for(auto i : tasks) {
            mp[i]++;
        }
        bool flag = false;
        for(auto i : mp) {
            if(i.second == 1) {
                flag = true;
                break;
            }
            else if(i.second % 3 == 0) {
                ans += i.second / 3;
            }
            else if(i.second % 3 == 2) {
                ans += i.second / 3;
                ans++;
            }
            else if(i.second % 3 == 1) {
                ans += 2;
                ans += (i.second - 4) / 3;
            }
        }
        if(flag) return -1;
        else return ans;
    }
};
