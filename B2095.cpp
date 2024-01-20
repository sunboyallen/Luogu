#include <cmath>
#include <iostream>

using namespace std;

double a[400];

int main() {
    double n;
    cin >> n;
    int min_index = 0, max_index = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < a[min_index]) {
            min_index = i;
        }
        if (a[i] > a[max_index]) {
            max_index = i;
        }
    }
    double sum = 0;
    for (int i = 0; i < n; i++) {
        if (i != min_index && i != max_index) {
            sum += a[i];
        }
    }
    double average = sum / (n - 2);
    printf("%.2lf ", average);
    double max_delta = 0;
    for (int i = 0; i < n; i++) {
        if (i != min_index && i != max_index) {
            if (fabs(a[i] - average) > max_delta) {
                max_delta = fabs(a[i] - average);
            }
        }
    }
    printf("%.2lf\n", max_delta);
}
