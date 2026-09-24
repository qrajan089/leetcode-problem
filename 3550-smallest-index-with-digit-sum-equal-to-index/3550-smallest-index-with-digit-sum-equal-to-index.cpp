class Solution {
    
public:

    int smallestIndex(vector<int>& nums) {


        for (int i = 0; i < nums.size(); ++i) {
             int k = nums[i];
            int Sum = 0;
            while (k > 0) {
                Sum += k % 10;
                k /= 10;
            }

            if (Sum == i) {
                return i; 
            }
        }
        return -1; 
    }
};
