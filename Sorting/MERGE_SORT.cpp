#include<bits/stdc++.h>

using namespace std;

void merge(int a[], int low, int mid, int high) {  // merging the subarray

    int i = low;
    int j = mid+1;

    int temp[high - low + 1];
    int k = 0;

    while(i <= mid and j <= high) {
        if(a[i] < a[j]) {
            temp[k++] = a[i++];
        } else {
            temp[k++] = a[j++];
        }
    }

    while(i <= mid) {
        temp[k++] = a[i++];
    } 
    while(j <= high) {
        temp[k++] = a[j++];
    }

    i = low;

    for(int p = 0; p < k; p++) {
        a[i++] = temp[p];
    }

}

void merge_sort(int a[], int l, int h) {   // applying the recursive (divide and conquer approach)

    if(l < h) {
        int mid = (l+h)/2;
        merge_sort(a, l, mid);
        merge_sort(a, mid+1, h);
        merge(a, l, mid, h);
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
    merge_sort(a, 0, n-1);
    print(a, n);

}	

int main() {

     solve();

	return 0;
}
