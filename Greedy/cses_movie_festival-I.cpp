#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void sort_vector(vector < int > &v) {
	sort(v.begin(),v.end());
}

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

    vector < pair < int, int > > v;

    for(int i = 0; i < n; i++) {
        int y, x;
        cin >> y >> x;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end());

    // for(auto i : v) cout << i.first << " " << i.second << endl;

    int cnt = 1;
    int showed = v[0].first;

    for(int i = 1; i < n; i++) {
        if( showed <= v[i].second) {
            showed = v[i].first;
            cnt++;
        }
    }
    cout << cnt << endl;
    
}

int main()
{
	fastIO();

	solve();

	return 0;
}
