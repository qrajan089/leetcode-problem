class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> r;
        
        for(int i = 0; i<nums.size(); i++) {
            if(r.count(target-nums[i]))
                return {r[target-nums[i]], i};
            r[nums[i]] = i;
        }
        
        return {};
    }
};