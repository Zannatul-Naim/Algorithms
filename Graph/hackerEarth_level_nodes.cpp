#include <iostream>
#include<vector>
#include<queue>
using namespace std;

vector < vector < int > > v;

int bfs(int x, int n) {

	vector<bool>visited(n+1, false);
	vector < int > levels(n+1, 0);

	queue < int > q;
	q.push(1);
	visited[1] = true;
	levels[1] = 1;
	while(!q.empty()) {
		int node = q.front();
		q.pop();

		for(auto i : v[node]) {
			if(!visited[i]) {
				visited[i] = true;
				q.push(i);
				levels[i] = levels[node]+1;
			}
		}
	}
	
	int cnt = 0;

	for(int i = 1; i <= n; i++) {
		if(levels[i] == x) cnt++;
	}

	return cnt;

}

int main() {
	int n;
	cin >> n;
	v.resize(n+1);
	for(int i = 1; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int x;
	cin >> x;

	cout << bfs(x, n) << endl;

	return 0;
}
