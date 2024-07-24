#include <iostream>

using namespace std;
int main() {
    int N;
    cin>>N;
    
    int lead = 0, max_lead= 0, winner = 1;
    int score1 = 0, score2= 0;
    
    for(int i =0; i<N;i++){
        int S,T;
        cin>>S>>T;
        
        score1+=S;
        score2+=T;
        
        lead= score1 - score2;
        
        if(lead > max_lead){
            max_lead = lead;
            winner = 1;
            
        }else if (lead < -max_lead){
            max_lead = -lead;
            winner = 2;
        }
    }
    
    cout<<winner<<" "<<max_lead<< endl;
    
    return 0;
}
