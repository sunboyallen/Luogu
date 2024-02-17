#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    double result = 0;
    for (int i = 0; i < n; i++) {
        double a;
        cin >> a;
        result += a;
    }
    result /= n;
    cout << fixed << setprecision(2) << result;
}
