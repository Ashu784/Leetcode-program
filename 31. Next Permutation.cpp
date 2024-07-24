class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index1=-1;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                index1=i;
                break;

            }
        }
if(index1 == -1)
   reverse(nums.begin(),nums.end());
else{
    int index2=-1;
    for(int i=nums.size()-1;i>=index1;i--){
        if(nums[i]>nums[index1-1]){
            index2=i;
            break;
        }
    }
    swap(nums[index1-1],nums[index2]);
    reverse(nums.begin()+index1,nums.end());
        }
    }
};
