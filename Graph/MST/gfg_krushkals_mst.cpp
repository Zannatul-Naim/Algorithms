
class Solution
{
    vector < int > par, rank;
    
    int find(int i) {
        if(par[i] == i) return i ;
        
        return par[i] = find(par[i]);
    }
    
    void unionByRank(int u, int v) {
        
        u = find(u);
        v = find(v);
        
        if(u != v) {
            if(rank[u] > rank[v]) 
                swap(u, v);
            par[u] = v;
            
            if(rank[u] == rank[v])
                rank[u]++;
        }
    }
    
	public:
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        par.resize(V);
        rank.resize(V, 0);
        
        for(int i = 0 ; i< V; i++) par[i] = i;
        
        vector < vector < int > > edges;
        
        for(int u = 0; u < V; u++) {
            for(auto nbr : adj[u]) {
                int v = nbr[0];
                int w = nbr[1];
                edges.push_back({w, u, v});
            }
        }
        
        sort(edges.begin(), edges.end());
        
        int ans = 0;
        
        for(auto e : edges) {
            int w = e[0];
            int u = e[1];
            int v = e[2];
            
            u = find(u);
            v = find(v);
            
            if(u != v) {
                ans += w;
                unionByRank(u, v);
            }
        }
        
        return ans;
    }
};
