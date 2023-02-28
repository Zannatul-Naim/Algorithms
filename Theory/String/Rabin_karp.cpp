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

vector < int > p_find(string t, string p) {

	vector < int > v;

	int n = t.size();
	int m = p.size();

	int d = 26;
	int h = 1;
	int mod = 1e9+7;

	for(int i = 1; i <= m-1; i++) {
		h = (h*d)%mod;
	}
	int t_h = 0;
	int p_h = 0;

	for(int i = 0; i < m; i++) {
		p_h = ((d*p_h)%mod + (p[i]-97+1))%mod;
		t_h = ((d*t_h)%mod + (t[i]-97+1))%mod;
	}

	for(int i = 0; i <= n-m; i++) {

		if(t_h == p_h) {
			int j;
			for(j = 0; j < m; j++) {
				if(t[i+j] != p[j]) break;
			}

			if(j == m) v.push_back(i+1);
		} else {

			t_h = d*((t[i+m]-97+1) + t_h - h*(t[i]-97+1))%mod;
			t_h = (t_h + mod)%mod;
		}
	}

	return v;
}

void solve() {

	string t, p;
	cin >> t >> p;

	vector < int > ans = p_find(t, p);

	if(ans.size() == 0) {
		cout << "Not Found" << endl;
	} else {
		cout << ans.size() << endl;
		for(auto i : ans) cout << i << " ";
		cout << endl;
	}
}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while(t--) {
	  solve();
	  cout << endl;
	}

    // cerr << "Execution time: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";

    return 0;
}
