 class Solution {
public:
    int numberOfSets(int n, int k) {  
     vector<vector<int>> dp(n, vector<int>(k + 1, 0));
        int MOD = 1e9 + 7;
        for (int i = 0; i < n; i++) {
            dp[i][0] = 1;
        }
 
        for (int j = 1; j <= k; j++) {

            long long run_sum = 0;
             for (int i = 1; i < n; i++) {
               
                run_sum = (run_sum + dp[i - 1][j - 1]) % MOD;
       
                dp[i][j] = (dp[i - 1][j] +  run_sum) % MOD;
            }
        }
        return dp[n - 1][k];
    }
 };