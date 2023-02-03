#include <algorithm>
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	int x = log2(n)+1;
	
	int cnt = 0;
	
	for(int i = 0; i < x; i++) {
	  if(n & (1 << i)) cnt++;
	}
	
	cout << cnt << endl;

	return 0;
}
