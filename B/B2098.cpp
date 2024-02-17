#include <iostream>

using namespace std;

int exist[30000];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (exist[a] == 0) {
            exist[a] = 1;
            cout << a << " ";
        }
    }
}
