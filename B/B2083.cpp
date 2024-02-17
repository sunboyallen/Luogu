#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    char c;
    int f;
    cin >> a >> b >> c >> f;
    for (int i = 0; i < a; i++) {
        if (i == 0 || i == a - 1) {
            for (int j = 0; j < b; j++) {
                cout << c;
            }
            cout << endl;
        } else {
            cout << c;
            for (int j = 0; j < b - 2; j++) {
                cout << (f == 0 ? ' ' : c);
            }
            cout << c << endl;
        }
    }
}
