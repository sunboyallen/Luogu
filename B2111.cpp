#include <cstring>
#include <iostream>

using namespace std;

char a[600];
char b[600];

int main() {
    double n;
    cin >> n;
    cin >> a;
    cin >> b;
    double length = strlen(a);
    double ans = 0;
    for (int i = 0; i < length; i++) {
        if (a[i] == b[i]) {
            ans++;
        }
    }
    if (ans / length >= n) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}
