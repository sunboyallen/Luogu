#include <iostream>

using namespace std;

int main() {
    double h;
    cin >> h;
    double s1 = h, s2 = h;
    for (int i = 0; i < 9; i++) {
        s1 += s2;
        s2 /= 2;
    }
    s2 /= 2;
    cout << s1 << endl << s2 << endl;
}
