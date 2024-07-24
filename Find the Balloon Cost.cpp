#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T_case = 0;
    int purple = 0, green = 0;
    cin>>T_case;
    for(int i=0;i<T_case; i++){
        cin>>purple>>green;
    int n;
        cin>>n;
    int c1=0,c2=0;
        for(int j=0;j<n;j++){
            int p1,p2;
            cin>>p1>>p2;
            c1+= green*p1 + purple*p2;
            c2+=green*p2 + purple*p1;
            
        }
        cout<<min(c1,c2)<<endl;
    }
    return 0;
}
