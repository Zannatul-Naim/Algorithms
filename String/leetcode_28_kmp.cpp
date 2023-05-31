
const int N = 1e4+1;
int F[N];

void prefix_table(string &P, int m) {
    int i = 1, j = 0;

    while(i < m) {
        if(P[i] == P[j]) {
            F[i] = j+1;
            i++, j++;
        } else if(j > 0) {
            j = F[j-1];
        } else {
            F[i] = 0;
            i++;
        }
    }
}

class Solution {
public:
    int strStr(string T, string P) {
        
        int n = T.size(), m = P.size();
        F[0] = 0;
        prefix_table(P, m);

        int i = 0, j = 0;

        while(i < n) {
            if(T[i] == P[j]) {
                if(j == m-1) {
                    return i-j;
                } else {
                    i++, j++;
                }
            } else if(j > 0) {
                j = F[j-1];
            } else {
                i++;
            }
        }
        return -1;
    }
};




/*


class Solution {
public:
    int strStr(string haystack, string needle) {

        if(needle == "") return 0;

        int n = needle.size();
        vector < int > lp(n, 0);

        int i = 1, j = 0;

        while(i < n) {

            if(needle[i] == needle[j]) {
                lp[i] = j+1;
                j += 1;
                i += 1;
            } else if(j == 0) {
                lp[i] = 0;
                i += 1;
            } else {
                j = lp[j-1];
            }
        }

        i = 0, j = 0;

        for( i; i < haystack.size();) {

            if(haystack[i] == needle[j]) {
                i++;
                j++;
            } else {
                if(j == 0) i++;
                else j = lp[j-1];
            }
            if(j == n) return i-n;
        }
        return -1;
    }
};

*/
