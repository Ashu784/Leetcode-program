#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    if (n % 2 != 0) {
        cout << "Weird" << endl;
    } 
    else {
        
        if (n >= 6 && n <= 20) {
            cout << "Weird" << endl;
        } 
        else {
            cout << "Not Weird" << endl;
        }
    }
    
    return 0;

}
