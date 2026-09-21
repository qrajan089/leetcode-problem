using namespace std;

class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long> ans(k, 0);
 
        vector<long long> dp(k, 0);
        
        for (int num : nums) {
            vector<long long> next_dp(k, 0);
            int numMod = num % k;
            next_dp[numMod]++;
             for (int r = 0; r < k; ++r) {
                if (dp[r] > 0) {
                    int next_mod = (r * numMod) % k;
                    next_dp[next_mod] += dp[r];
                }
            }
      
            for (int r = 0; r < k; ++r) {
                ans[r] += next_dp[r];
            }
            
            dp = move(next_dp);
        }
        
        return ans;
    }
};
