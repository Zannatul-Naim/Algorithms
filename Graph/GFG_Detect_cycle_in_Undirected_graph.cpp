
class Solution {
  public:
    int visited[10000];
    int parent[10000];
    bool bfs(int src, vector < int > adj[]) {
        
        
        parent[src] = -1;
        
        visited[src] = 1;
        
        queue<int>q;
        q.push(src);
        
        while(!q.empty()) {
            int f = q.front();
            q.pop();
            
            for(auto i : adj[f]) {
                if(visited[i] and i != parent[f]) {
                    return true;
                } else if(not visited[i]) {
                    q.push(i);
                    visited[i] = true;
                    parent[i] = f;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
       

       for(int i = 0; i < V; i++) visited[i] = 0;
       
       for(int i = 0; i < V; i++) {
           if(!visited[i]) {
               bool f = bfs(i, adj);
               if(f) return true;
           }
       }
       return false;
    
    }
};
