#include <iostream>

using namespace std;

int a[20][20];

int main() {
    int n, i, j;
    cin >> n >> i >> j;
    for (int x = 1; x <= n; x++) {
        cout << "(" << i << "," << x << ") ";
    }
    cout << endl;
    for (int y = 1; y <= n; y++) {
        cout << "(" << y << "," << j << ") ";
    }
    cout << endl;
    int i1 = i - min(i, j) + 1, j1 = j - min(i, j) + 1;
    for (int x = 0; x < n; x++) {
        if (i1 + x <= n && j1 + x <= n) {
            cout << "(" << i1 + x << "," << j1 + x << ") ";
        }
    }
    cout << endl;
    i1 = i + min(n - i + 1, j) - 1, j1 = j - min(n - i + 1, j) + 1;
    for (int x = 0; x < n; x++) {
        if (i1 - x >= 1 && j1 + x <= n) {
            cout << "(" << i1 - x << "," << j1 + x << ") ";
        }
    }
}
