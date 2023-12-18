#include <iostream>

using namespace std;

int a[20];

int main() {
    int count = 0;
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++) {
        int tmp1 = a[i] / 3;
        int tmp2 = a[i] % 3;
        count += tmp2;
        a[i] = tmp1;
        a[(i - 1 + 5) % 5] += tmp1;
        a[(i + 1 + 5) % 5] += tmp1;
    }

    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
    cout << count << endl;
    return 0;
}
