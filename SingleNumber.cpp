class Solution {
public:
    int singleNumber(vector<int>& ob) {
    sort(ob.begin(), ob.end());
    for(auto i = 0; i < ob.size(); i+=2){
        if (i + 1 >= ob.size() || ob[i] != ob[i + 1]) {
          return ob[i];
        }
	  
    }
    return 0;
    }
};
