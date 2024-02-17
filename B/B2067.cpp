#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (m >= x) {
            m -= x;
        } else {
            count++;
        }
    }
    cout << count << endl;
}
