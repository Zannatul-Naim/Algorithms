#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define in cin >>
#define out cout <<
#define pb push_back

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}


void solve() {

	ll n, q;
	cin >> n >> q;

	ll a[n+1];
	a[0] = 0;
	for(ll i = 1; i <= n; i++) {
		cin >> a[i];
		a[i] = a[i] + a[i-1];
	}

	while(q--) {
		
		ll x, y;
		cin >> x >> y;

		ll ans = a[y] - a[x-1];
		cout << ans << endl;
	}

}

int main()
{
	fastIO();

	int t = 1;
	// cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
