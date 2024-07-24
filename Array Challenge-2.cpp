#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int Arr[N];

    for (int i = 0; i < N; ++i) {
        cin >> Arr[i];
    }

    int count = 0;
    int a = 0;

    for (int i = 0; i < N; ++i) {
        if (Arr[i] > a) {
            count++;
            a = Arr[i];
        }
    }

    cout << count << endl;

    return 0;
}
