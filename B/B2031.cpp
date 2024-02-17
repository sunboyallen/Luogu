#include <iostream>

using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;
    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
    double S = 0.5 * ((x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3));
    printf("%.2f\n", S);
}
