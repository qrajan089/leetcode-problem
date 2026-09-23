class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }
        
        int target = totalSum - x;
        if (target < 0) return -1;
        if (target == 0) return nums.size();
        
        int currentSum = 0;
        int maxLen = -1;
        int k = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];
            
            while (currentSum > target && k <= i) {
                currentSum -= nums[k];
                k++;
            }
            
            if (currentSum == target) {
                maxLen = max(maxLen, i - k + 1);
            }
        }

        
       return maxLen == -1 ? -1 : nums.size() - maxLen; 
  
    }
};

 