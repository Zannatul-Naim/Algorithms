
void bfs(int start, vector < int > v[], vector < int > &vis) {
    vis[start] = 1;
    
    queue < int > q;
    q.push(start);
    
    while(!q.empty()) {
        int t = q.front();
        q.pop();
        
        for(auto i : v[t]) {
            if(!vis[i]) {
                vis[i] = 1;
                q.push(i);
            }
        }
    }
}


int Solution::solve(int A, vector<vector<int> > &B) {
    
    vector < int > adjList[A];
    
    int size = B.size();
    
    for(int i = 0; i < size; i++) {
        adjList[B[i][0]-1].push_back(B[i][1]-1);
        adjList[B[i][1]-1].push_back(B[i][0]-1);
    }
    
    vector < int > visited (A, 0);
    
    int cnt = 0;
    
    for(int i = 0; i < A; i++) {
        if(!visited[i]) {
            cnt++;
            bfs(i, adjList, visited);
        }
    }
    
    return cnt;
}
