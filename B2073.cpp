#include <iostream>

using namespace std;

int main() {
    int a, b;
    int n;
    cin >> a >> b >> n;
    for (int i = 0; i < n; i++) {
        a %= b;
        a *= 10;
    }
    cout << a / b << endl;
}
