
#include <bits/stdc++.h>

using namespace std;

void heapify(int a[], int n, int i) {

    int par = i;

    int l = 2*i;
    int r = 2*i+1;

    if(l < n and a[par] < a[l]) par = l;
    if(r < n and a[par] < a[r]) par = r;

    if(par != i) {
        swap(a[par], a[i]);
        heapify(a, n, par);
    } else {
        return;
    }
}

void heap_sort(int a[], int n) {
    
    for(int i = n/2; i >= 1; i--) {
        heapify(a, n, i);
    }

    for(int i = n; i >= 2; i--) {

        swap(a[1], a[i]);
        heapify(a, i, 1);
    }

}

int main() {

    int n;
    cin >> n;

    int a[n+1];
    for(int i = 1; i <= n; i++) cin >> a[i];

    heap_sort(a, n);

    for(int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    } cout << endl;

    return 0;


}
