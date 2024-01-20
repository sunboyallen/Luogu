#include <iostream>

using namespace std;

int a[300];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == m) {
            ans++;
        }
    }
    cout << ans << endl;
}
