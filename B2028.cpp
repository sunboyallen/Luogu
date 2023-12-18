#include <iostream>

using namespace std;

int main() {
    char a[10];
    cin >> a;
    for (int i = 2; i >= 0; i--) {
        cout << a[i];
    }
}