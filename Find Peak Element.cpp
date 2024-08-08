//SOLUTION 1: BINARY SEARCH
int findPeakElement(vector<int> &arr) {
  int left = 0;
  int right = arr.size() - 1;
  while (left < right) {
    int mid = left + (right - left) / 2;
    if (arr[mid] > arr[mid + 1]) {
      right = mid;
    } else
  left = mid + 1;
  } 
  return left;
}
//SOLUTION 2 : STL
int findPeakElement(vector<int> &arr) {
  int ans=max_element(arr.begin(),arr.end())-arr.begin();
  return ans;
}
