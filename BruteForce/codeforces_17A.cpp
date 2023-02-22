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
 
 bool visited[1005];
 memset(visited, false, sizeof(visited));
 
 int n, k;
 cin >> n >> k;
 
 vector < int > v(n+1);
 
 for(int i = 2; i <= n; i++) {
   if(!visited[i]) {
     v.push_back(i);
     for(int j = i*i; j <= n; j += i) visited[j] = true;
   }
 }
 
 int cnt = 0;
 for(int i = 0; i < v.size(); i++) {
   for(int j = 0; j < i; j++) {
     if(v[j] + v[j+1] + 1 == v[i]) {
       cnt++;
       break;
     }
   }
 }
 
 if(cnt >= k) cout << "YES" << endl;
 else cout << "NO" << endl;
  
}

int main()
{
	fastIO();

	solve();

	return 0;
}
