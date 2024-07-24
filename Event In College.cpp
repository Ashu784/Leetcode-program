#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; 

    int in[t], out[t];

    for (int i = 0; i < t; ++i)
        cin >> in[i];
    
    for (int i = 0; i < t; ++i)
        cin >> out[i];

    int current_students = 0;
    int max_students = 0;
    
    for (int i = 0; i < t; ++i) {
        current_students += in[i];
        current_students -= out[i];
        
        if (current_students > max_students) {
            max_students = current_students;
        }
    }

    cout << max_students << endl;

    return 0;
}
