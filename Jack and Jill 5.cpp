#include<iostream>
using namespace std;
int main() {
    int n, count = 0;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    while(true){
        int zero=0;
        for(int j=0; j<n; j++){
            if (arr[j]!=0) {
                zero =1;
                break;
            }
        }
        if(zero == 0)
            break;
        else{
            int even=0;
            for(int j=0; j<n; j++){
                if(arr[j]%2 == 1){
                    even=1;
                    break;
                }            
            }
            if (even==0){
               for(int j=0; j<n; j++){
                   arr[j]=arr[j]/2;
               }
               count++;
            }
            else {
            for(int j=0; j<n; j++){
                if(arr[j]%2 !=0){
                    arr[j]=arr[j]-1;
                    count++;
                 }
              }
           }
            
        }
        
    }
    cout<<count;
    return 0;
}
