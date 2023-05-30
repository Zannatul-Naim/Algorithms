#include<bits/stdc++.h>

using namespace std;


int partition(int a[], int l, int h) {

    int pivot = a[l];

    int i = l, j = h;

    while(i < j) {
        do {
            i++;   // increase i while not finding a value that less then pivot
        } while(a[i] <= pivot);
        do {
            j--;   // decraese j while not finding any valu that greater than pivot
        } while(a[j] > pivot);

        if(i < j) swap(a[i], a[j]);  // swap less and greater element then pivot
    }
    swap(a[l], a[j]);  // swap the pivot element
  
    return j;
}

void quick_sort(int a[], int l, int h) {

    if(l < h) {
      
        int j = partition(a, l, h);  // make partition and get a pivoit point

        quick_sort(a, l, j);  // call first half before a pivot
        quick_sort(a, j+1, h);  // call second half after a pivot
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
	quick_sort(a, 0, n);
	print(a, n);

}	

int main() {

	solve();

	return 0;
}
