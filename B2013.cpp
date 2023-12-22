#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double F;
    cin >> F;
    double C = 5 * (F - 32) / 9;
    cout << fixed << setprecision(5) << C << endl;
    return 0;
}
