#include <bits/stdc++.h>

using namespace std;

vector < vector < int > > adjList;

vector < bool > vis(10000, false);

void dfs(int x) {
    
    if(!vis[x]) vis[x] = true;

    for(auto i : adjList[x]) {
        if(!vis[i]) {
            dfs(i);
        }
    }

}


int main() {

    int v, e;
    cin >> v >> e;

    adjList.resize(v+1, vector < int > (v+1));

    for(int i = 0; i < e; i++) {

        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);        
        adjList[v].push_back(u);        
    }

    int x;
    cin >> x;

    vis.resize(v+1, false);

    dfs(x); 

    int cnt = 0;

    for(int i = 1; i <= v; i++) {
        if(!vis[i]) cnt++;
    }

    cout << cnt << endl;

    return 0;
}
