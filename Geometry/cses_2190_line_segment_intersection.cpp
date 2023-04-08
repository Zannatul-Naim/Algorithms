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

bool on_segment(p pi, p pj, p pk) {

	if(min(pi.x, pj.x) <= pk.x and max(pi.x, pj.x) >= pk.x  and min(pi.y, pj.y) <= pk.y and max(pi.y, pj.y) >= pk.y) 
		return true;
	return false;
}

void solve() {

	ll x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	p p1, p2, p3, p4;

	p1.x = x1;
	p2.x = x2;
	p3.x = x3;
	p4.x = x4;

	p1.y = y1;
	p2.y = y2;
	p3.y = y3;
	p4.y = y4;
	

	int d1, d2, d3, d4;

	d3 = direction(p1, p2, p3);
	d4 = direction(p1, p2, p4);
	d1 = direction(p3, p4, p1);
	d2 = direction(p3, p4, p2);


	if(((d1 > 0 and d2 < 0) or (d1 < 0 and d2 > 0)) and ((d3 > 0 and d4 < 0) or (d3 < 0 and d4 > 0)))
		cout << "YES" << endl;
	else if(d1 == 0 and on_segment(p3, p4, p1)) 
		cout << "YES" << endl;
	else if(d2 == 0 and on_segment(p3, p4, p2))
		cout << "YES" << endl;
	else if(d3 == 0 and on_segment(p1, p2, p3))
		cout << "YES" << endl;
	else if(d4 == 0 and on_segment(p1, p2, p4))
		cout << "YES" << endl;
	else cout << "NO" << endl;
	
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
