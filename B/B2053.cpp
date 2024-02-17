#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double delta = b * b - 4 * a * c;
    if (delta < 0) {
        printf("No answer!");
        return 0;
    }

    double x1 = (-b + sqrt(delta)) / (2 * a);
    double x2 = (-b - sqrt(delta)) / (2 * a);
    if (x1 == x2) {
        printf("x1=x2=%.5f", x1);
    } else {
        if (x1 > x2) {
            swap(x1, x2);
        }
        printf("x1=%.5f;x2=%.5f", x1, x2);
    }
}
