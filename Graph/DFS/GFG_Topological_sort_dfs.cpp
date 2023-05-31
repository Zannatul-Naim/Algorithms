class Solution
{
	public:
	
	static bool top_dfs(int src, unordered_map<int, bool>&vis, stack<int>&s, vector <int> adj[]) {
	   
	   vis[src] = 1;
	   
	   for(auto i : adj[src]) {
	       if(!vis[i]) {
	           top_dfs(i, vis, s, adj);
	       }
	   }
	   
	   s.push(src);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    unordered_map < int, bool > vis;
	    stack <int> s;
	    
	    for(int i = 0; i < V; i++) {
	        if(!vis[i]) {
	            top_dfs(i, vis, s, adj);
	        }    
	    }

        vector < int > ans;
        
        while(!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }

	    return ans;
	            
	}
	

};class Solution
{
	public:
	
	static bool top_dfs(int src, unordered_map<int, bool>&vis, stack<int>&s, vector <int> adj[]) {
	   
	   vis[src] = 1;
	   
	   for(auto i : adj[src]) {
	       if(!vis[i]) {
	           top_dfs(i, vis, s, adj);
	       }
	   }
	   
	   s.push(src);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    unordered_map < int, bool > vis;
	    stack <int> s;
	    
	    for(int i = 0; i < V; i++) {
	        if(!vis[i]) {
	            top_dfs(i, vis, s, adj);
	        }    
	    }

        vector < int > ans;
        
        while(!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }

	    return ans;
	            
	}
	

};
