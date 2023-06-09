#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	set<int> s;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		s.insert(x);
	}

	if (s.size() == 1)
		cout << "NO" << endl;
	else
	{
		set<int>::iterator setIt;
		setIt = s.begin();
		setIt++;
		cout << *setIt << endl;
	}
}

int main()
{
	solve();

	return 0;
}
