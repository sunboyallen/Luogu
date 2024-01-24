#include <iostream>

using namespace std;

int a[200][200];

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < m; i++) {
        ans += a[i][0];
    }
    if (n >= 2) {
        for (int i = 0; i < m; i++) {
            ans += a[i][n - 1];
        }
    }
    if (m >= 2) {
        for (int i = 1; i < n - 1; i++) {
            ans += a[0][i];
        }
        for (int i = 1; i < n - 1; i++) {
            ans += a[m - 1][i];
        }
    }
    cout << ans << endl;
}
