#include <iostream>

using namespace std;

int main() {
    int a[10];
    int count = 0;
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
        if (a[i] < 60) {
            count++;
        }
    }
    cout << (count == 1);
}
