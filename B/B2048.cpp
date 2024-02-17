#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    char c;
    cin >> x >> c;
    int addition = 0;
    if (c == 'y') {
        addition = 5;
    }
    if (x <= 1000) {
        cout << 8 + addition;
    } else {
        cout << 8 + addition + ceil((x - 1000) / 500.0) * 4;
    }
}
