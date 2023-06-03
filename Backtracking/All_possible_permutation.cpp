#include<bits/stdc++.h>

using namespace std;

void permute(string &s, int l, int r) {

	if(l == r) {
		cout << s << endl;
	} else {

		for(int i = l; i <= r; i++) {
			
			swap(s[l], s[i]);

			permute(s, l+1, r);

			swap(s[l], s[i]); // backtracking
		}
	}
}

void solve() {

	int n;
	cin >> n;

	string s;
	cin >> s;

	permute(s, 0, n-1);

}	

int main() {

	fastIO();

  solve();

	return 0;
}
