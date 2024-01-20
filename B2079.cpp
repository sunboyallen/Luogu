#include <iostream>

using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    double e = 0;
    for (int i = 0; i <= n; i++) {
        e += 1.0 / factorial(i);
    }
    printf("%.10lf\n", e);
}
