class Solution {
public:
  bool hasValidPath(vector<vector<char>>& grid) {

        int m = grid.size(), n = grid[0].size();
        
        if ((m + n) % 2 == 0) return false;
        
        vector<vector<unordered_set<int>>> dp(m, vector<unordered_set<int>>(n));
        int k = grid[0][0] == '(' ? 1 : -1;
        if (k < 0) return false;
        dp[0][0].insert(k);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0) continue;

                int delta = grid[i][j] == '(' ? 1 : -1;
                if (i > 0)
                    for (int b : dp[i-1][j])
                        if (b + delta >= 0) dp[i][j].insert(b + delta);
                if (j > 0)
                    for (int b : dp[i][j-1])
                        if (b + delta >= 0) dp[i][j].insert(b + delta);
            }
        }
        return dp[m-1][n-1].count(0);
    }
};