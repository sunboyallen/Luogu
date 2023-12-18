#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int flag = 1;
    if (a + b <= c) {
        flag = 0;
    }
    if (a + c <= b) {
        flag = 0;
    }
    if (b + c <= a) {
        flag = 0;
    }
    cout << flag;
}
