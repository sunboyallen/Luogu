#include <iostream>

using namespace std;

int a[10][10];

int max_index[10];
int min_index[10];

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i][j] > a[i][max_index[i]]) {
                max_index[i] = j;
            }
        }
    }
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 5; i++) {
            if (a[i][j] < a[min_index[j]][j]) {
                min_index[j] = i;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        if (min_index[max_index[i]] == i) {
            cout << i + 1 << " " << max_index[i] + 1 << " "
                 << a[i][max_index[i]] << endl;
            return 0;
        }
    }
    cout << "not found" << endl;
}
