
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
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
