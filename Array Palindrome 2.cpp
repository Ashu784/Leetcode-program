#include <iostream>

using namespace std;

int a(int arr[], int n) {
    int res = 0;
    int i = 0, j = n - 1;

    while (i < j) {
        if (arr[i] == arr[j]) {
            i++;
            j--;
        } else if (arr[i] < arr[j]) {
            arr[i + 1] += arr[i];
            i++;
            res++;
        } else {
            arr[j - 1] += arr[j];
            j--;
            res++;
        }
    }

    return res;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout <<a(arr, n) << endl;

    return 0;
}
