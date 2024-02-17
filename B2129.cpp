#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double m =
        max(a, max(b, c)) / (max(a + b, max(b, c)) * max(a, max(b, b + c)));
    printf("%.3f\n", m);
}
