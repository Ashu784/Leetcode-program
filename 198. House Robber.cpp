class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        int prev2 = 0; 
        int prev1 = 0; 

        for (int i = n - 1; i >= 0; i--) {
            int current = max(nums[i] + prev2, prev1);
            prev2 = prev1;
            prev1 = current;
        }

        return prev1;
    }
};
