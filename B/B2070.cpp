#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    double Sn = 0;
    for (int i = 1; i <= n; i++) {
        double a = 1.0 / i;
        if (i % 2 == 0) {
            Sn -= a;
        } else {
            Sn += a;
        }
    }
    printf("%.4f\n", Sn);
}
