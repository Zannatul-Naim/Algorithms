#include<bits/stdc++.h>
using namespace std;

vector < vector < int > > adj;
vector < bool > vis;

int dfs(int x, int n, int d) {

    int mx = d;

    for(auto i : adj[x]) {
        if(i != n) {
            mx = max(mx, dfs(i, x, d+1));
        }
    }

    return mx;
    
}

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;
        adj.clear();
        vis.clear();
        adj.assign(n+1, vector < int > ());
        vis.resize(n+1, false); 


        for(int i = 0; i < n-1; i++) {

            int u, v;
            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cout << 2*(n-1) - dfs(1, 0, 0) << endl;
        
    }

    return 0;
}
