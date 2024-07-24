#include <iostream>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;

    int parking_lot[R][C];

    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> parking_lot[i][j];
        }
    }

    int max_full_count = 0;
    int max_row_index = -1;
        for (int i = 0; i < R; ++i) {
            int current_full_count = 0;
        for (int j = 0; j < C; ++j) {
            if (parking_lot[i][j] == 1) {
                current_full_count++;
            }
        }
        if (current_full_count > max_full_count) {
            max_full_count = current_full_count;
            max_row_index = i;
        }
    }

    cout << max_row_index + 1 << endl;
            
    return 0;
}
