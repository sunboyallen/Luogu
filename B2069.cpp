#include <iostream>

using namespace std;

double p[50];
double q[50];
double S[50];

int main() {
    p[0] = 1;
    q[0] = 2;
    S[0] = 2;
    for (int i = 0; i <= 30; i++) {
        q[i + 1] = q[i] + p[i];
        p[i + 1] = q[i];
        S[i + 1] = S[i] + q[i + 1] / p[i + 1];
    }
    int n;
    cin >> n;
    printf("%.4f\n", S[n - 1]);
}
