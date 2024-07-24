#include <iostream>
using namespace std;
int main() {

    int a, b, c;
    scanf("%d,%d,%d", &a, &b, &c);
    cin >> a >> b >> c;
    int secondLargest;

    if ((a > b && a < c) || (a > c && a < b)) {
        secondLargest = a;
    } else if ((b > a && b < c) || (b > c && b < a)) {
        secondLargest = b;
    } else {
        secondLargest = c;
    }
     cout<< secondLargest << endl;
    return 0;
}
