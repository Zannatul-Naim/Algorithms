#include<iostream>
#include<math.h>

using namespace std;

int main() {
    
    double mem[1000001];
    // memset(n, 0, sizeof(mem));
    mem[0] = 0;
    for(int i = 1; i < 1000001; i++) mem[i] = mem[i-1] + log10(i);
    
    int t;
    cin >> t;
    int x = 1;
    while(t--) {
        cout << "Case " << x << ": ";
        int n, base;
        cin >> n >> base;
        
        int ans = mem[n] / log10(base) + 1;
        
        cout << ans << endl;
        
        x++;
    }
}
