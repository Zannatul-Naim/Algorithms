class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int min_price = prices[0];
        int n = prices.size();
        int i = 1;
        while(i < n) {
            if(prices[i] < min_price) {
                min_price = prices[i];
            } else {
                profit = max(profit, prices[i]-min_price);
            }
            i++;
        }
        
        return profit;
    }
};



// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int profit = 0;
//         int p1 = prices[0];

//         for(int i = 1; i < prices.size(); i++) {
//             if(prices[i-1] > prices[i]) {
//                 if(p1 < prices[i]) continue;
//                 else p1 = prices[i];
//             } else if(prices[i-1] < prices[i]) {
//                 int x = prices[i] - p1;
//                 if(x > profit) profit = x;
//                 else continue;
//             }
//         }
//         return profit;
//     }
// };
