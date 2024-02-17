#include <iostream>

using namespace std;

void check(int n) {
    int tmp = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            tmp += i;
        }
    }
    if (tmp == n) {
        cout << n << endl;
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        check(i);
    }
}
