#include<bits/stdc++.h>
#include<sstream>
using namespace std;

void solve() {
  
  int n;
  cin >> n;
  
  map < int, int > mp;
  
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    mp[x]++;
  }
  
  int mx = -1;
  for(auto i : mp) {
    mx = max(mx, i.second);
  }
  cout << mx << endl;
  
}

int main()
{
	
	solve();

	return 0;
}
