#include <iostream>

using namespace std;

long long a[200];

int main() {
    int N;
    cin >> N;
    int max_num = -100000;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        if (a[i] > max_num) {
            max_num = a[i];
        }
    }
    long long ans = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] != max_num) {
            ans += a[i];
        }
    }
    cout << ans << endl;
}
