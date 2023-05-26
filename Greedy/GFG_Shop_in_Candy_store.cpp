class Solution
{
public:
    vector<int> candyStore(int c[], int N, int k)
    {
        sort(c, c+N);
        
        int mini = 0; 
        int n = N;
        n-= 1;
        for(int i = 0; i <= n; i++) {
            mini += c[i];
            n -= k;
        }
        
        int mx = 0;
        
        n = N;
        int K = 0;
        
        for(int i = n-1; i >= K; i--) {
            mx += c[i];
            K += k;
            
        }
        
        vector < int > v;
        
        v.push_back(mini);
        v.push_back(mx);
        
        return v;
        
    }
};
