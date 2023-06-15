#include<bits/stdc++.h>

using namespace std;


void print(int a[], int n) {
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

int linear_search(int a[], int n, int key) {
	for(int i = 0; i < n; i++) {
		if(a[i] == key) {
			return i;
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
	
	int ans = linear_search(a, n, x);
 
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
