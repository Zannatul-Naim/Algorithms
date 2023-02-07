class Solution {
public:
    int strStr(string haystack, string needle) {

     long long mod = 1e9 + 7;
     long long p = 26;

     long long h = haystack.size();
     long long n = needle.size();

     vector < long long > p_pow(max(h, n));

     p_pow[0] = 1;
     for(int i = 1; i < p_pow.size(); i++) {
         p_pow[i] = (p_pow[i-1] * p) % mod;
     }

     vector < long long > hay(h+1, 0);
     for(int i = 0; i < h; i++) {
         hay[i+1]= (hay[i] + (haystack[i] - 'a' + 1) * p_pow[i]) % mod;
     }
     long long hash_val = 0;

     for(int i = 0; i < n; i++) {
         hash_val = (hash_val + (needle[i] - 'a' + 1) * p_pow[i]) % mod;
     }

     for(int i = 0; i + n -1 < h; i++) {
         long long c = (hay[i+n] + mod - hay[i]) % mod;

         if(c == hash_val*p_pow[i]%mod) {
             return i;
         }
     }
     return -1;
    }
};
