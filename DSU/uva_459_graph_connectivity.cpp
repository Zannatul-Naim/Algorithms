
#include <bits/stdc++.h>

using namespace std;

const int N = 1e5;

int p[N];
int sz[N];

void make(int n) {

    for(int i = 1; i <= n; i++) {
        p[i] = i;
        sz[i] = 1;
    }
}

int find(int v) {
    if(p[v] == v) return v;
    return p[v] = find(p[v]);
}

void Union(int a, int b) {

    a = find(a);
    b = find(b);

    if(a != b) {

        if(sz[a] < sz[b])
            swap(a, b);
        
        p[a] = b;
        sz[a] += sz[b];
    }
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        
        char ch;
        cin >> ch;

        int z = ch - 'A' + 1;

        make(z);

        string x;
        getline(cin, x);

        while(getline(cin, x)) {

            if(x.size() == 0) break;
            
            Union(x[0] - 'A' + 1, x[1] - 'A' + 1);
        }

        int c = 0;
        for(int i = 1; i <= z; i++) {

            if(find(i) == i) c++;
        }

        cout << c << endl;

        if(t) cout << endl;

    }

    return 0;
}
