
class Solution {
  public:
    int visited[10000];
    int parent[10000];
  
  
  /* solution using recursive dfs */
    
    // bool dfs(int node, int parent, vector < int > adj[]) {
        
    //     visited[node] = 1;
        
    //     for(auto i : adj[node]) {
    //         if(!visited[i]) {
    //             bool isCycle = dfs(i, node, adj);
    //             if(isCycle) return true;
    //         } else if(i != parent) {
    //             return true;                
    //         }
    //     }
    //     return false;
    // }
  
  /* solution using iterative dfs */
    
    bool dfs(int n, vector < int > adj[]) {
        
        stack < int > s;
        
        visited[n] = 1;
        parent[n] = -1;
        
        s.push(n);
        
        while(!s.empty()) {
            int f = s.top();
            s.pop();
            
            for(auto i : adj[f]) {
                if(!visited[i]) {
                    visited[i] = true;
                    s.push(i);
                    parent[i] = f;
                } else if(visited[i] and i != parent[f]) {
                    return true;
                }
            }
        }
        return false;
        
    }
    bool isCycle(int V, vector<int> adj[]) {
       

       for(int i = 0; i < V; i++) visited[i] = 0;
       
       for(int i = 0; i < V; i++) {
           if(!visited[i]) {
               bool f = dfs(i, adj);
               if(f) return true;
           }
       }
       return false;
    
    }
};
