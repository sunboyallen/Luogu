#include <iostream>

using namespace std;

int a[10][10];

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    swap(a[x - 1], a[y - 1]);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
