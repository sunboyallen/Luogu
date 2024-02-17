#include <iostream>

using namespace std;

int a[6000];

int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j += i) {
            a[j] = !a[j];
        }
    }
    for (int i = 1; i <= N; i++) {
        if (a[i]) {
            cout << i << " ";
        }
    }
}
