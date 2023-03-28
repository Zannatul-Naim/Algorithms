#include <bits/stdc++.h>

using namespace std;

int p[1001];
int s[1001];

void make_parent(int v) {
    p[v] = v;
    s[v] = 1;
}

int find_parent(int v ) {

    if(p[v] == v) return v;

    return p[v] = find_parent(p[v]);

}

void Union(int a, int b) {

    a = find_parent(a);
    b = find_parent(b);

    if(a != b) {
        if(s[a] < s[b])
            swap(a, b);
        p[b] = a;
        s[a] += s[b];
    }

}

void solve() {

    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        make_parent(i);
    }

    for(int i = 1; i <= k; i++) {
        int x, y;
        cin >> x >> y;

        Union(x, y);
    }
    int c = 0;
    for(int i = 1; i <= n; i++) {

        if(find_parent(i) == i) c++;
    }

    cout << c << endl;
}

int main() {

    solve();

    return 0;
    
}
