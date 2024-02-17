#include <iostream>

using namespace std;

int main() {
    int a[2000];
    int b[2000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a[i] * b[i];
    }
    cout << ans << endl;
}
