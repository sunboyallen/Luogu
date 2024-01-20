#include <iostream>

using namespace std;

int main() {
    double N;
    cin >> N;
    double b1 = 0, b2 = 0, b3 = 0, b4 = 0;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        if (a >= 0 && a <= 18) {
            b1++;
        } else if (a >= 19 && a <= 35) {
            b2++;
        } else if (a >= 36 && a <= 60) {
            b3++;
        } else if (a >= 61) {
            b4++;
        }
    }
    printf("%.2lf%%\n", b1 / N * 100);
    printf("%.2lf%%\n", b2 / N * 100);
    printf("%.2lf%%\n", b3 / N * 100);
    printf("%.2lf%%\n", b4 / N * 100);
}
