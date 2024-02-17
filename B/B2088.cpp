#include <iostream>

using namespace std;

double a[20];

double b[20] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};

int main() {
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    double ans = 0;
    for (int i = 0; i < 10; i++) {
        ans += a[i] * b[i];
    }
    printf("%.1f\n", ans);
}
