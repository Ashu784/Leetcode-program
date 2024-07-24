#include <iostream>
using namespace std;
int buyAndSell(int arr[], int n){
    int mini = arr[0], profit = 0;
    for(int i =1; i<n; i++){
        int cost = arr[i] - mini;
        profit = max(profit, cost);
        mini = min(arr[i], mini);
        }
    return profit;
        
}
int main() {
    int n;
    cin>>n;
    
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<buyAndSell(arr, n)<<endl;
    return 0;
}
