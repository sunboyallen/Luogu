#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    double result = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        result += a;
    }
    cout << (int)result << " ";
    result /= n;
    cout << fixed << setprecision(5) << result;
}
