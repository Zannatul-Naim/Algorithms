#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

bool checkIsDistinct(int n) {
  int digit = log10(n) + 1;
  set<int>s;
  while(n) {
    s.insert(n%10);
    n /= 10;
  }
  if(s.size() == digit) return true;
  else return false;
}

void solve() {
  int a, b;
  cin >> a >> b;
  bool flag = true;
  for(int i = a; i <= b; i++) {
    bool x = checkIsDistinct(i);
    if(x) {
      cout << i << endl;
      flag = false;
      break;
    }
  }
  if(flag) cout << -1 << endl;
}

int main()
{
	fastIO();

	solve();

	return 0;
}
