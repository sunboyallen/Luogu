#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    if (m % 2 == 0) {
        m++;
    }
    if (n % 2 == 0) {
        n--;
    }
    int num = (n - m) / 2 + 1;
    int sum = (m + n) * num / 2;
    cout << sum;
}
