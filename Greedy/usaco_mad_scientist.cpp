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

    string s1, s2;
    cin >> s1 >> s2;

    // int cnt = 0;
    // for(int i = 0; i < n; i++) {
    //     if(s1[i] == s2[i]) continue;
    //     else {
    //         while(s1[i] != s2[i]) {
    //             swap(s1[i], s2[i]);
    //             i++;
    //         }
    //         cnt++;
    //     }
    // }
    // cout << cnt << endl;

    int cnt = 0;
    bool mis = false;
    for(int i = 0; i < n; i++) {
        if(s1[i] != s2[i]) {
            if(!mis) {
                mis = true;
                cnt++;
            }
        } else {
            mis = false;
        }
    }
    cout << cnt << endl;
    
}

int main()
{
	fastIO();

	// #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	// #else
	// online submission
	// #endif

	// int t;
	// cin >> t;
	// while(t--) {
	// 	solve();
	// }
	solve();

	return 0;
}
