#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double Xa, Ya, Xb, Yb;
    scanf("%lf%lf%lf%lf", &Xa, &Ya, &Xb, &Yb);
    double distance = sqrt((Xa - Xb) * (Xa - Xb) + (Ya - Yb) * (Ya - Yb));
    printf("%.3f\n", distance);
}
