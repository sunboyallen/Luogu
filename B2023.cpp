#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char c;
    int a;
    float b;
    double d;
    cin >> c >> a >> b >> d;
    cout << c << " " << a << " " << fixed << setprecision(6) << b << " " << d << endl;
}