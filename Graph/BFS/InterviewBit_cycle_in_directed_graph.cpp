

int bfs (vector < int > v[], int n) {
    // vector < bool > vis(n+1, false);
    vector < int > inDegree(n+1, 0);
    
    for(int i = 1; i <= n; i++) {
        for(auto j : v[i]) {
            inDegree[j]++;
        }
    }
    
    queue < int > q;
    
    for(int i = 1; i <= n; i++) {
        if(inDegree[i] == 0) q.push(i);
    }
    
    int cnt = 0;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        
        cnt++;
        
        for(auto i : v[node]) {
            inDegree[i]--;
            if(inDegree[i] == 0) q.push(i);
        }
    }
    
    if(cnt == n) return 0;
    else return 1;
       
}

int Solution::solve(int a, vector<vector<int> > &b) {
    
    int n = b.size();
    
    vector < int > adjList[a+1];
    
    for(int i = 0; i < n; i++) {
        adjList[b[i][0]].push_back(b[i][1]);
    }
    
    return bfs(adjList, a);
}
