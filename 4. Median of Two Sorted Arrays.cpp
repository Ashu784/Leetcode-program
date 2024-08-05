#include<bits/stdc++.h>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>s;
        s.insert(s.end(), nums1.begin(), nums1.end());
        s.insert(s.end(), nums2.begin(), nums2.end());
        sort(s.begin(), s.end()); 
        int n = s.size();
        double n1;
        if(n%2 == 0)
             n1 = ((s[n/2] + s[n/2 - 1]) / 2.0);
        else
            n1 = s[n/2];       
        return n1;
    }
};
