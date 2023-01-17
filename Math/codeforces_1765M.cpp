#include<bits/stdc++.h>
#include<sstream>
using namespace std;

#define ll long long
#define endl "\n"
#define input cin >>
#define output cout <<
#define pb push_back

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}
void solve() {
  
  ll n;
  cin >> n;
  
  if(n%2 == 0) {
    cout << n / 2 << " " << n / 2 << endl;
  } else {
    vector < ll > v;

    for(ll i = 1; i*i <= n; i++) {
      if(n%i == 0) {
        v.push_back(i);
        if(n/i != i) v.push_back(n/i);
      }
    }
    sort(v.begin(), v.end());
    ll mn = INT_MAX;
    for(ll i = 0; i < v.size()-1; i++) {
      ll temp = n - v[i];
      mn = mn > temp? temp: mn;
    }
    cout << mn << " " << n - mn << endl;
  }
  
}

int main()
{
	fastIO();
	int t;
	cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
