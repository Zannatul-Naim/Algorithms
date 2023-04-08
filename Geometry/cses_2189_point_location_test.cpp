#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define in cin >>
#define out cout <<
#define pb push_back

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

struct Point {
	ll x, y;
};

typedef Point p;

ll crossProduct(p p1, p p2) {
	return (p1.x*p2.y - p2.x*p1.y);
}

int direction(p pi, p pj, p pk) {

	ll x = crossProduct({pk.x-pi.x, pk.y-pi.y}, {pj.x-pi.x, pj.y-pi.y});

	if(x > 0) return 1;
	if(x < 0) return -1;
	return 0;

}


void solve() {

	p p1, p2, p3;

	cin >> p1.x >> p1.y;
	cin >> p2.x >> p2.y;
	cin >> p3.x >> p3.y;

	// cross product of (p3-p1)x(p2-p1)

	int d = direction(p1, p2, p3);

	if(d == 0) cout << "TOUCH" << endl;
	else if(d > 0) cout << "RIGHT" << endl;
	else cout << "LEFT" << endl;
	
}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
