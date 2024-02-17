#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int x = 2;
    while (!(a % x == b % x && b % x == c % x)) {
        x++;
    }
    cout << x << endl;
}
