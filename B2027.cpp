#include <iostream>

using namespace std;

int main() {
    double r;
    scanf("%lf", &r);
    double V = 4.0 / 3 * 3.14 * r * r * r;
    printf("%.5f\n", V);
}
