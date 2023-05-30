#include<bits/stdc++.h>

using namespace std;

void print(int a[], int n) {
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

int ternary_search(int a[], int l, int r, int x) {

    if(r >= l) {

        int mid1 = l + (r-l)/3;
        int mid2 = r - (r-l)/3;

        if(a[mid1] == x) return mid1;
        if(a[mid2] == x) return mid2;

        if(x < a[mid1]) {
            return ternary_search(a, l, mid1-1, x);
        } else if(x > a[mid2]) {
            return ternary_search(a, mid2+1, r, x);
        } else {
            return ternary_search(a, mid1+1, mid2-1, x);
        }
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

    int ans = ternary_search(a, 0, n-1, x);
 
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
