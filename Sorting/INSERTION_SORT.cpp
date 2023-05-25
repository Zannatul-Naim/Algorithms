#include<bits/stdc++.h>

using namespace std;

void print(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    } cout << endl;
}

void solve() {

    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    cout << "Before sorting: ";
    print(a, n);

    for(int j = 1; j < n; j++) {
        int key =  a[j];

        int i = j-1;
        while(i >= 0 and key < a[i]) {
            a[i+1] = a[i];
            i -= 1;
        }

        a[i+1] = key;
    }

    cout << "After sorting: ";
    print(a, n);


}	

int main()
{

    solve();

	return 0;
}

// Before sorting: 6 4 5 3 2 1 
// After sorting: 1 2 3 4 5 6 
