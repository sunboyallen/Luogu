#include <iostream>

using namespace std;

int main() {
    int a[10];
    cin >> a[0] >> a[1] >> a[2];
    int maxn = a[0];
    for (int i = 1; i < 3; i++) {
        if (a[i] > maxn) {
            maxn = a[i];
        }
    }
    cout << maxn; 
}
