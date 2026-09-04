 class Solution {
public:
    bool stoneGame(vector<int>& piles) {
 
   int n = piles.size();
  vector<vector<int>> res(n, vector<int>(n, 0));

        for (int i = 0; i < n; ++i) {
            res[i][i] = piles[i];
        }

        for (int len = 2; len <= n; ++len) {
            for (int i = 0; i + len - 1 < n; ++i) {
                int j = i + len - 1;
                res[i][j] = max(piles[i] - res[i + 1][j], piles[j] - res[i][j - 1]);
            }
        }

        return res[0][n - 1] > 0;
    }
};
