#include<bits/stdc++.h>

using namespace std;

void selection_sort(int a[], int n) {

    for(int i = 0; i < n; i++) {
        int min = i;

        for(int j = i+1; j < n; j++) {
            if(a[j] < a[min]) min = j;
        }
        swap(a[min], a[i]);
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

    selection_sort(a, n);

    print(a, n);

}	

int main() {

  solve();

	return 0;
}
