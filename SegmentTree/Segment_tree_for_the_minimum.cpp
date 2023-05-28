#include <bits/stdc++.h>

using namespace std;

#define ll long long
const ll N = 1e5+2;
ll a[N];
ll tree[4*N];

void build(ll node, ll start, ll end) {
	
	if(start == end) {
		tree[node] = a[start];
		return;
	}
	
	ll mid = (start + end) / 2;
	
	build(2*node, start, mid);
	build(2*node+1, mid+1, end);
	
	tree[node] = min(tree[2*node], tree[2*node+1]);
}

void update(ll node, ll start, ll end, ll index, ll val) {
	
	if(start == end) {
		tree[node] = val;
		a[start] = val;
		return;
	}
	
	ll mid = (start + end) / 2;
	
	if(index <= mid) {
		update(2*node, start, mid, index, val);
	} else {
		update(2*node+1, mid+1, end, index, val);
	}
	tree[node] = min(tree[2*node], tree[2*node+1]);
	
}

ll query(ll node, ll start, ll end, ll left, ll right) {
	
	if(start > right or end < left) {
		return INT_MAX;
	}
	
	if(start >= left and end <= right) {
		return tree[node];
	}
	
	ll mid = (start + end)/2;
	
	ll q1 = query(2*node, start, mid, left, right);
	ll q2 = query(2*node+1, mid+1, end, left, right);
	
	return min(q1, q2);
}

int main() {
	
	ll n, m;
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	build(1, 0, n);
	
	while(m--) {
		ll x;
		cin >> x;
		
		if(x == 1) {
			ll idx, val;
			
			cin >> idx >> val;
			update(1, 0, n, idx, val);
		} else {
			ll l, r;
			cin >> l >> r;
			
			r--;
			
			ll ans = query(1, 0, n, l, r);
			cout << ans << endl;
		}
	}
	
	return 0;
	
}
