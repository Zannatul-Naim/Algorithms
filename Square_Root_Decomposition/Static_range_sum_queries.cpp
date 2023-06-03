#include<bits/stdc++.h>

using namespace std;

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
	
	solve();
	return 0;
}
