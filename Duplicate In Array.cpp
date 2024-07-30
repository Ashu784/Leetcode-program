#include <bits/stdc++.h>
int findDuplicate(vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for(auto i=0; i<n; i++) {
        if (arr[i]==arr[i+1]) {
            return arr[i];
        }
    }  

}
