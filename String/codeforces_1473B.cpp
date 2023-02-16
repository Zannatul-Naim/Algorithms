#include<bits/stdc++.h>

using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

	string s, x;
	cin >> s >> x;

	string a = s;
	string b = x;

	while(a.size() != b.size()) {

		if(a.size() < b.size()) a+= s;
		else b += x;
	}

	if(a == b) {
		cout << a << endl;
		return;
	} else {
		cout << "-1" << endl;
		return;
	}
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
