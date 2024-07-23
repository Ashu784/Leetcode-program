#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int result = 0;
    int place = 1; 

    while (n > 0) {
        int digit = n % 10; 
        if (digit % 2 != 0) { 
            result += digit * place; 
            place *= 10; 
        }
        n /= 10; 
    }

    if (result == 0) {
        cout << "0";
    } else {
        cout << result; 
    }

    return 0;
}
