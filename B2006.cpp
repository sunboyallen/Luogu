#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int x, a, y, b;
    cin >> x >> a >> y >> b;
    double v = (double)(b * y - a * x) / (b - a);
    cout << fixed << setprecision(2) << v;
    return 0;
}
