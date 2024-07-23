#include <iostream>
using namespace std;

long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; ++i) {
        fact *= i;
    }
    return fact;
}
long long permutations(int n, int r) {
    return factorial(r) / factorial(r - n);
}

int main() {
    int n, r;
    cin >> n;
    cin >> r;

    if (n > r) {
        cout << "Cannot adjust " << n << " people on " << r << " seats" << endl;
    } else {
        long long result = permutations(n, r);
        cout << result << endl;
    }

    return 0;
}
