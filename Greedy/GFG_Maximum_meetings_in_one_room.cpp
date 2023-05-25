class Solution{
public:

    static bool cmp(pair < pair < int, int > , int > a, pair < pair < int, int > , int > b) {
        return a.first.second < b.first.second;
    }
        
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        
        vector < pair < pair < int, int > , int > > v;
        
        for(int i = 0; i < N; i++) {
            v.push_back({{S[i], F[i]}, i+1});
        }
        sort(v.begin(), v.end(), cmp);
        
        vector < int > ans;
        ans.push_back({v[0].second});
        int endpoint = v[0].first.second;
        for(int i = 1; i < N; i++) {
            if(v[i].first.first > endpoint) {
                ans.push_back(v[i].second);
                endpoint = v[i].first.second;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};
