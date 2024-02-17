#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double h, r;
    cin >> h >> r;
    double V = 3.14 * r * r * h;
    int n = ceil(20 * 1000 / V);
    cout << n << endl;
}
