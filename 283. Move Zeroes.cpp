class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(auto i=nums.begin(); i<nums.end(); ){
            if(*i==0){
                nums.erase(i);
            }
            else
                i++;
            }
            nums.resize(n);
    }
    
};

