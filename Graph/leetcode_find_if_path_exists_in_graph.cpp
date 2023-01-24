class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
       
       vector < int > adjList[n];

       int e = edges.size();

       for(int i = 0; i < e; i++) {
           int u = edges[i][0];
           int v = edges[i][1];
           adjList[u].push_back(v);
           adjList[v].push_back(u);
       }

       queue < int > q;
       q.push(source);

       vector < bool > vis (n, false);

       while(!q.empty()) {
           int temp = q.front();
           q.pop();
           vis[temp] = true;
           if(temp == destination) return true;
           for(auto i : adjList[temp]) {
               if(!vis[i]) {
                   vis[i] = true;
                   q.push(i);
               }
           }
       }
    return false;
    }

       
};
