#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    for (int x = 0; x <= c; x++) {
        for (int y = 0; y <= c; y++) {
            if (a * x + b * y == c) {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
