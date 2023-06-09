#include<bits/stdc++.h>
using namespace std;

void solve() {
	
	int n;
	cin >> n;
	map<int, int> mp;
	int table_cnt = 0, mx = -1;
	for(int i = 0; i < 2*n; i++) {
		int x;
		cin >> x;
		if(mp[x] == 0) {
			mp[x]++;
			table_cnt++;
		}
		else {
			mp[x]--;
			table_cnt--;
		}
		if(mx < table_cnt) mx = table_cnt;
	}
	cout << mx << endl;
}

int main()
{
	solve();

	return 0;
}
