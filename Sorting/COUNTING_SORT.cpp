#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+3;

void counting_sort(int a[], int n) {

    int temp[N];

    for(int i = 0; i < n; i++) {
        temp[a[i]]++;
    }

    for(int i = 1; i < N; i++) {
        temp[i] += temp[i-1];
    }
    
    int o[n];
    for(int i = n-1; i >= 0; i--) {

        o[--temp[a[i]]] = a[i];
    }

    for(int i = 0; i < n; i++) {
        a[i] = o[i];
    }

}

void print(int a[], int n) {
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

void solve() {

	int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++) cin >> a[i];

    print(a, n);

    counting_sort(a, n);

    print(a, n);

}	

int main() {


  solve();

	return 0;
}
