#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

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
	for(int i = 0; i*i <= n; i++) {
		if(n % i == 0) return false;
	}
	return true;
}

long long int factorial(int n) {
	return n * factorial(n-1);
}

ll bin_pow(int a, int n) {
	if(n == 0) return 1;
	if(n == 1) return a;
	ll t = pow(a, n/2);
	return t*t*pow(a, n%2);
}

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
	fastIO();

	solve();

	return 0;
}
