#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double c = a * 1.0 / b;
    cout << fixed << setprecision(9) << c << endl;
    return 0;
}
