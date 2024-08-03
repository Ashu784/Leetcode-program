class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int x = nums1.size();
        int y = nums2.size();
        vector<int> res;
        
        for (int i = 0; i < x; i++) {
            auto itr = find(nums2.begin(), nums2.end(), nums1[i]);
            if (itr != nums2.end()) {
                bool found = false;
                for (auto j = itr + 1; j != nums2.end(); j++) {
                    if (*j > nums1[i]) {
                        res.push_back(*j);
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    res.push_back(-1);
                }
            } else {
                res.push_back(-1);
            }
        }
        
        return res;
    }
};
