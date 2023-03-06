#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define pb push_back
#define sortAll sort(v.begin(), v.end());


void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

const ll N = 1e6;
const ll INF = 1e17;

void dijkstra(ll src, vector < pair < ll, ll > > g[], vector < ll > &p, ll n) {

	vector < ll > vis(N, 0);
	vector < ll > dist(N, INF);
	vector < ll > pat;
	pat.assign(n+1, -1);

	set < pair < ll, ll > > s;

	s.insert({0, src});
	dist[src] = 0;

	while(s.size() > 0) {
		
		auto node = *s.begin();

		s.erase(s.begin());

		ll v = node.second;
		ll dist_v = node.first;

		if(vis[v]) continue;
		vis[v] = 1;

		for(auto child : g[v]) {

			ll child_v = child.first;
			ll dist_child = child.second;

			if(dist[v] + dist_child < dist[child_v]) {
				dist[child_v] = dist[v] + dist_child;
				pat[child_v] = v;
				s.insert({dist[child_v], child_v});
			}
		}
	}

	if(pat[n] == -1) {
		p.push_back(-1);
		return;
	}

	for(ll i = n; i != src; i = pat[i]) {
		p.push_back(i);
	}
	p.push_back(src);

    }

void solve() {

	ll n, m;
	cin >> n >> m;

	vector < pair < ll, ll > > g[N];

	for(ll i = 1; i <= m; i++) {
		ll x, y, w;
		cin >> x >> y >> w;

		g[x].push_back({y, w});
		g[y].push_back({x, w});
	}

	vector < ll > p;
	dijkstra(1, g, p, n);

	reverse(p.begin(), p.end());

	for(auto i : p) cout << i << " ";
	cout << endl;
}

int main()
{
	fastIO();

	ll t = 1;
	// cin >> t;

	while(t--) {
	  solve();
	}

    // cerr << "Execution time: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";

    return 0;
}
