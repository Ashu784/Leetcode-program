#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int seat;
        cin>>seat;
        int rem = seat%12;
        switch (rem){
            case 1:
                cout<<"WS "<<seat+11<<endl;
                break;
            case 2:
                cout<<"MS "<<seat+9<<endl;
                break;
            case 3:
                cout<<"AS "<<seat+7<<endl;
                break;
            case 4:
                cout<<"AS "<<seat+5<<endl;
                break;
            case 5:
                cout<<"MS "<<seat+3<<endl;
                break;
            case 6:
                cout<<"WS "<<seat+1<<endl;
                break;
            case 7:
                cout<<"WS "<<seat-1<<endl;
                break;
            case 8:
                cout<<"MS "<<seat-3<<endl;
                break;
            case 9:
                cout<<"AS "<<seat-5<<endl;
                break;
            case 10:
                cout<<"AS "<<seat-7<<endl;
                break;
            case 11:
                cout<<"MS "<<seat-9<<endl;
                break;
            case 12:
                cout<<"WS "<<seat-11<<endl;
                break;
        }
    
    }
    return 0;
}
