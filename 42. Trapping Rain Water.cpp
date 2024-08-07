class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        int left[size];
        left[0] = height[0];
        for(int i=1; i<size; i++) {
            if(height[i] > left[i-1]) {
                left[i] = height[i];
            }
            else
                left[i] = left[i-1];
        }
        int right[size];
        right[size-1] = height[size-1];
        for(int i=size-2; i>=0; i--){
            if(height[i] > right[i+1])
                right[i] = height[i];
            else
                right[i]=right[i+1];
        }
        int sum=0;
        for(int i=0; i<size; i++){
            sum += min(left[i], right[i])-height[i];
            }

        return sum;
    }
};
