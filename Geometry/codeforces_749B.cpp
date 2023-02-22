#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

	int x1, y1, x2, y2, x3, y3;

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	cout << 3 << endl;

	cout << x1 + x2 - x3 << " " << y1 + y2 - y3 << endl;
	cout << x1 - x2 + x3 << " " << y1 - y2 + y3 << endl;
	cout << -x1 + x2 + x3 << " " << -y1 + y2 + y3 << endl;

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
