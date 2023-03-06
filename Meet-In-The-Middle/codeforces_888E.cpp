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

vector < ll > v;

vector < ll >  getSubSetSum(ll l, ll r, ll m) {

	vector < ll > res ;
	ll len = r-l+1;
	for(ll i = 0; i < (1 << len); i++) {
		ll sum = 0;

		for(ll j = 0; j < len; j++) {
			if(i & (1 << j)) {
				sum = (sum + v[l+j]) % m;
			}
		}
		res.push_back(sum);
	}
	return res;
}

void solve() {

	ll n, m;
	cin >> n >> m;

	for(ll i = 0; i < n; i++) {
		ll x;
		cin >> x;

		v.push_back(x%m);
	}

	vector < ll > subSetSum1 = getSubSetSum(0, n/2-1, m);
	vector < ll > subSetSum2 = getSubSetSum(n/2, n-1, m);

	sort(subSetSum2.begin(), subSetSum2.end());

	ll ans = 0;

	for(auto i : subSetSum1) {
		ll x = i+subSetSum2[(lower_bound(subSetSum2.begin(), subSetSum2.end(), m-i))-subSetSum2.begin() -1];
		// cout << x << " ";
		ans = max(ans, x%m);
	}

	cout << ans << endl;
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
