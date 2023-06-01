
typedef pair < int, int > pi;

class Solution
{
	public:
	
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector < bool > vis(V, false);
        
        priority_queue<pi, vector<pi>, greater<pi> > pq;
        
        pq.push({0, 0});
        
        int ans = 0;
        
        while(pq.size() != 0) {
            
            pair < int, int > t = pq.top();
            pq.pop();
            
            int node = t.second;
            int weight = t.first;
            
            if(vis[node]) continue;
            vis[node] = true;
            ans += weight;
            
            for(auto i : adj[node]) {
                int nbrNode = i[0];
                int nbrCost = i[1];
                if(!vis[nbrNode]) {
                    pq.push({nbrCost, nbrNode});
                }
            }
        }
        return ans;
    }
};
