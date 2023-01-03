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

int gcd(int a, int b) {
	return b==0? a : gcd(b, a%b);
}

int lcm(int a, int b) {
	return (a * (b / gcd(a, b)));
}

bool isPrime(int n) {  // A number is Prime number or not.
	if(n < 2) return false;
	for(int i = 2; i*i <= n; i++) {
		if(n % i == 0) return false;
	}
	return true;
}

long long int factorial(int n) {
	return n * factorial(n-1);
}

void solve() {
 
 bool visited[1005];
 memset(visited, false, sizeof(visited));
 
 int n, k;
 cin >> n >> k;
 
 vector < int > v(n+1);
 
 /////////// sieve part //////////////////////
 
 for(int i = 2; i <= n; i++) {
   if(!visited[i]) {
     v.push_back(i);
     for(int j = i*i; j <= n; j += i) visited[j] = true;
   }
 }
 
 /////////// end of sieve part //////////////////////
 
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
