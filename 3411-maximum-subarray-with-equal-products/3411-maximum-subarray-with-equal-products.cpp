class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int res = 2;  
        for (int i = 0; i < n; i++) {
            int prod = 1;
            int g = 0;
            int I = 1;

            for (int j = i; j < n; j++) {
                if (prod > 1e8) break; 

                prod = prod * nums[j];
                g = gcd(g, nums[j]);
                I = lcm(I, nums[j]);
                if (prod == g * I) {
                    int length = j - i + 1;
                    res = max(res, length);
                }
            }
        }

        return res;
    }
};
