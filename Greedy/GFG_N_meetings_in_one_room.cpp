
class Solution
{
    public:
    int maxMeetings(int start[], int end[], int n)
    {
        vector < pair < int , int > > v;
        
        for(int i = 0; i < n; i++) {
            v.push_back({end[i], start[i]});
        }
        sort(v.begin(), v.end());
        int cnt = 1;
        int e = v[0].first;
        int s = v[0].second;
        for(int i = 1; i < n; i++) {
            if(v[i].second > e) {
                cnt++;
                e = v[i].first;
            }
        }
        return cnt;
    }
};

/* Another new solution */

// class Solution
// {
//     public:
//     static bool cmp(pair<int, int> a, pair<int, int> b) {
//         return a.second < b.second;
//     }
//     int maxMeetings(int start[], int end[], int n)
//     {
//         vector < pair < int , int > > v;
//         for(int i = 0; i < n; i++) {
//             v.push_back({start[i], end[i]});
//         }
//         sort(v.begin(), v.end(), cmp);
        
//         int cnt = 1;
//         int endpoint = v[0].second;
        
//         for(int i = 1; i < n; i++) {
            
//             if(v[i].first > endpoint) {
//                 cnt++;
//                 endpoint = v[i].second;
//             }
//         }
//         return cnt;
//     }
// };
