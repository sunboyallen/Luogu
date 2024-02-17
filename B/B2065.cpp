#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    double a1, a2;
    cin >> a1 >> a2;
    double x = a2 / a1;
    for (int i = 0; i < n - 1; i++) {
        cin >> a1 >> a2;
        double y = a2 / a1;
        if (y - x > 0.05) {
            cout << "better" << endl;
        } else if (x - y > 0.05) {
            cout << "worse" << endl;
        } else {
            cout << "same" << endl;
        }
    }
}
