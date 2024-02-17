#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    long long sum = 1;
    for (int i = 0; i < b; i++) {
        sum = (sum * a) % 1000;
    }
    if (sum < 10) {
        cout << "00" << sum << endl;
    } else if (sum < 100) {
        cout << "0" << sum << endl;
    } else {
        cout << sum << endl;
    }
}
