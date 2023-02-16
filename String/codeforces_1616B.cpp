#include<bits/stdc++.h>

using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

	int n;
	cin >> n;

	string x;
	cin >> x;
	
	int i = 1;
	for(i; i < n; i++) {

		if(x[i] < x[i-1]) continue;
		else if(i > 1 && x[i] == x[i-1]) continue;
		else break;
	}

	for(int k = 0; k < i; k++) cout << x[k];
	for(int k = i-1; k >= 0; k--) cout << x[k];
	cout << endl;

}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
