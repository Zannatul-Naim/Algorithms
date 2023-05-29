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


/*

class Solution {
public:
    int strStr(string text, string pat) {
        
        long long MOD = 1e9+7, n, m, d = 26;

        n = text.size();
        m = pat.size();

        long long hash = 1;

        for(int i = 0; i < m-1; i++) {
            hash = (hash*d)%MOD;
        }
        long long pattern_hash_val = 0, text_hash_partial = 0;
        for(int i = 0; i < m; i++) {
            pattern_hash_val = (d * pattern_hash_val + pat[i]) % MOD;
            text_hash_partial = (d * text_hash_partial + text[i]) % MOD;
        }

        for(int i = 0; i <= n-m; i++) {

            if(pattern_hash_val == text_hash_partial) {
                return i;
            }
            if(i < n-m) {
                text_hash_partial = (d * (text_hash_partial - text[i]*hash) + text[i+m]) %MOD;

                if( text_hash_partial < 0) text_hash_partial += MOD;
            }
        }
        return -1;
    }
};

*/
