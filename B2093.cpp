#include <iostream>

using namespace std;

int a[20000];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x;
    cin >> x;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
