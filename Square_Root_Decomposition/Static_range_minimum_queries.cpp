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

	int n, q;
	cin >> n >> q;

	int a[n];
	int len = (int) sqrt(n + .0);
	if(len * len < n) len += 1;
	int b[len];

	for(int i = 0; i < len; i++) b[i] = INT_MAX;

	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(b[(i/len)] > a[i]) b[i/len] = a[i];
	}

	while(q--) {

		int l, r;
		cin >> l >> r;
		int cl = l / len, cr = r / len;
		l--, r--;
		int ans = INT_MAX;	
		if(cl == cr) {
			for(int i = l; i <= r; i++) {
				ans = min(ans, a[i]);
			}
		} else {
			int end = (cl+1)*len-1;
			for(int i = l; i <= end; i++) {
				ans = min(ans, a[i]);
			}
			for(int i = cl+1; i <= cr-1; i++) {
				ans = min(ans, b[i]);
			}
			for(int i = cr*len+1; i <= r; i++) {
				ans = min(ans, a[i]);
			}
		}

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
