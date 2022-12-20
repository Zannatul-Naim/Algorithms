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

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b)
{
	return (a * (b / gcd(a, b)));
}

bool isPrime(int n)
{ // A number is Prime number or not.
	if (n < 2)
		return false;
	for (int i = 0; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

long long int factorial(int n)
{
	return n * factorial(n - 1);
}

ll bin_pow(int a, int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return a;
	ll t = pow(a, n / 2);
	return t * t * pow(a, n % 2);
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
