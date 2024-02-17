#include <iostream>

using namespace std;

int main() {
    int L, R;
    cin >> L >> R;
    int times = 0;
    for (int i = L; i <= R; i++) {
        int tmp = i;
        while (tmp > 0) {
            if (tmp % 10 == 2) {
                times++;
            }
            tmp /= 10;
        }
    }
    cout << times << endl;
}
