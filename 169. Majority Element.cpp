class Solution {
public:
    int majorityElement(vector<int>& arr) {
        map<int, int>ob;
        int n = arr.size();
	    	for(auto i=0; i<n; i++){
			    ob[arr[i]]++;
			    if(ob[arr[i]] > n/2)
			    	return arr[i];
		    }
		    return -1;
        
    }
};
