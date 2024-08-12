#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N1;
    cin >> N1;
    vector<int> g(N1);

    for (int i = 0; i < N1; i++) {
        cin >> g[i];
    }
    int N2;
    cin >> N2;
    vector<int> s(N2);

    for (int i = 0; i < N2; i++) {
        cin >> s[i];
    }

    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int i = 0, j = 0;
    int happyChildren = 0;
    
    while (i < N1 && j < N2) {
        if (s[j] >= g[i]) { 
            happyChildren++;
            i++; 
        }
        j++; 
    }
    
    cout << happyChildren << endl;   
    return 0;
}
