#include <iostream>

using namespace std;

int main() {
    double x, a, y, b;
    cin >> x >> a >> y >> b;
    double v = (b * y - a * x) / (b - a);
    printf("%.2f", v);
    return 0;
}
