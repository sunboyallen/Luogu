#include <iostream>

using namespace std;

int main() {
    double x;
    int n;
    cin >> x >> n;
    double sum = 0;
    double tmp = 1;
    for (int i = 0; i <= n; i++) {
        sum += tmp;
        tmp *= x;
    }
    printf("%.2f\n", sum);
}
