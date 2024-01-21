#include <iostream>

using namespace std;

const double pi = 3.14159;

int main() {
    double r;
    cin >> r;
    printf("%.4f %.4f %.4f\n", 2 * r, 2 * pi * r, pi * r * r);
    return 0;
}
