#include<bits/stdc++.h>
#include<sstream>
using namespace std;

#define ll long long
#define endl "\n"
#define input cin >>
#define output cout <<
#define pb push_back

const int mod = 1e9+7;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

long long int factorial(int n) {
	return n * factorial(n-1);
}

void solve() {
  
  string s;
  cin >> s;
  
  ll y = 0;
  for(char ch : s) y = (y*10LL + (ch - '0'))%mod;
  ll f = 1;
  for(ll i = 1; ; i++) {
    f = 1LL * i * f % mod;
    if(f == y) {
      cout << i << endl;
      break;
    }
  }
}

int main()
{
	fastIO();
	int t = 1;
// 	cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
