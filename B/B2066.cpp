#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    double time = 0;
    for (int i = 0; i < n; i++) {
        double x, y;
        cin >> x >> y;
        double s = sqrt(x * x + y * y);
        time += 2 * s / 50;
        double a;
        cin >> a;
        time += a * 1.5;
    }
    cout << (int)ceil(time) << endl;
}
