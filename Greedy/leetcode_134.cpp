class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int tg = 0, tc = 0;

        for(auto i : gas) tg += i;
        for(auto i : cost) tc += i;

        if(tg < tc) return -1;

        int cur = 0, st = 0;

        for(int i = 0; i < gas.size(); i++) {
            cur += (gas[i] - cost[i]);

            if(cur < 0) {
                st = i+1;
                cur = 0;
            }
        }

        return st;
    }
};
