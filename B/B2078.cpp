#include <cstring>
#include <iostream>

using namespace std;

int main() {
    char m[20];
    int k;
    cin >> m >> k;
    int count = 0;
    int len = strlen(m);
    for (int i = 0; i < len; i++) {
        if (m[i] == '3') {
            count++;
        }
    }
    if (count == k) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
