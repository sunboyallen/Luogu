#include <iomanip>
#include <iostream>

using namespace std;

const double pi = 3.14159;

int main() {
    double r;
    cin >> r;
    cout << fixed << setprecision(4) << 2 * r << " " << 2 * pi * r << " "
         << pi * r * r << endl;
    return 0;
}
