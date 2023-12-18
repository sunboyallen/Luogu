#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    int flag = 0;
    for (int i = 3; i <= 7; i += 2) {
        if (x % i == 0) {
            flag = 1;
            cout << i << " ";
        }
    }
    if (flag == 0) {
        cout << "n";
    }
}
