#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve()
{
	int n;
	cin >> n;
	
	set<string>s;
	set<string>::iterator st;
	for(int i = 0; i < n; i++) {
		string x;
		cin >> x;
		st = s.find(x);
		if(st != s.end() && s.size() != 0) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
			s.insert(x);
		}
	}
}

int main()
{
	fastIO();
	solve();

	return 0;
}
