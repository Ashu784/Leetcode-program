class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n =nums.size();
        int a=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
            }
            a=max(a,count);
            if(nums[i]!=1){
                count=0;
            }
        }
        return a;
        
    }
};
