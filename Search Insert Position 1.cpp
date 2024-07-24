#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;


int main() {
    int Size = 0;
    cin>>Size;
    int arr[Size];
    for(int i=0;i<Size;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
   
    int left = 0;
    int right = Size-1;
    while(left <=right){
        int mid = left+ (right - left)/2;
       
        if(arr[mid] == target){
            cout<<mid;
            return 0;
           
        }else if (target >= arr[mid]){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    cout<<left;
}
