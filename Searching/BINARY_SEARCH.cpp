#include<bits/stdc++.h>

using namespace std;

void print(int a[], int n) {
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

int binary_search(int a[], int l, int r, int x) {

    while(l <= r) {
        int m = (l+r)/2;
        if(a[m] == x) return m;

        if(x < a[m]) r = m-1;
        else l = m+1;
    }
    return -1;
}

void solve() {

	int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++) cin >> a[i];

    int x;
    cin >> x;

    print(a, n);

   int ans = binary_search(a, 0, n-1, x);

   if(ans != -1) {
    cout << "Found at " << ans << endl;
   } else {
    cout << "Not found!" << endl;
   }

}	

int main() {

  solve();

	return 0;
}
