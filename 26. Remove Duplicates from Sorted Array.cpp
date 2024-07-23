class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto i = unique(nums.begin(), nums.end());
        nums.erase(i, nums.end());
        return nums.size();   
    }   
};
