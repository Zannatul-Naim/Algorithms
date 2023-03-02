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

const int N = 1e6 + 1;

ll h[N];
ll dp[N];

ll f(ll i) {

	if(i == 0) return 0;

	ll c = INT_MAX;

	if(dp[i] != -1) return dp[i];

	c = min(c, f(i-1) + abs(h[i] - h[i-1]));
	if(i >= 2)
		c = min(c, f(i-2) + abs(h[i] - h[i-2]));

	return dp[i] = c;
}


void solve() {

	ll n;
	cin >> n;

	for(ll i = 0; i < n; i++) cin >> h[i];

	memset(dp, -1, sizeof(dp));

	cout << f(n-1) << endl;

}

int main()
{
	fastIO();

	int t = 1;
	// cin >> t;

	while(t--) {
	  solve();
	}

    // cerr << "Execution time: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";

    return 0;
}
