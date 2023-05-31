class Solution {
public:
    bool isValid(int i, int j, int m, int n) {
        if(i >= 0 and i < m and j >= 0 and j < n) return true;
        return false;
    }
    void dfs(vector<vector<char>>&g, int i, int j, int m, int n) {

        g[i][j] = '0';
        if(isValid(i, j+1, m, n) and g[i][j+1] == '1') dfs(g, i, j+1, m, n);
        if(isValid(i+1, j, m, n) and g[i+1][j] == '1') dfs(g, i+1, j, m, n);
        if(isValid(i-1, j, m, n) and g[i-1][j] == '1') dfs(g, i-1, j, m, n);
        if(isValid(i, j-1, m, n) and g[i][j-1] == '1') dfs(g, i, j-1, m, n);
    }
    int numIslands(vector<vector<char>>& g) {
        
        int m = g.size();
        int n = g[0].size();

        int ans = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(g[i][j] == '1') {
                    ans++;
                    dfs(g, i, j, m, n);
                }
            }
        }
        return ans;
    }
};
