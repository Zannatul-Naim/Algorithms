#include <bits/stdc++.h>

using namespace std;

int parent[1001];
int s[1001];
multiset<int> ms;

void make(int v)
{

    parent[v] = v;
    s[v] = 1;
    ms.insert(1);
}

int find(int v)
{

    if (parent[v] == v)
        return v;

    return parent[v] = find(parent[v]);
}

void Union(int a, int b)
{

    a = find(a);
    b = find(b);

    if (a != b)
    {
        if (s[a] < s[b])
            swap(a, b);
        parent[b] = a;

        ms.erase(ms.find(s[a]));
        ms.erase(ms.find(s[b]));
        ms.insert(s[a] + s[b]);
        s[a] += s[b];
    }
}

void solve()
{

    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; i++)
    {
        make(i);
    }

    for (int i = 1; i <= q; i++)
    {
        int x, y;
        cin >> x >> y;

        Union(x, y);

        if (ms.size() == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            auto mn = *(ms.begin());
            auto mx = *(--ms.end());

            cout << mx - mn << endl;
        }
    }
}

int main()
{

    solve();

    return 0;
}
