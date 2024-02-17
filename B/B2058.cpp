#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a1 = 0, a2 = 0, a3 = 0;
    int tmp1, tmp2, tmp3;
    for (int i = 0; i < n; i++) {
        cin >> tmp1 >> tmp2 >> tmp3;
        a1 += tmp1;
        a2 += tmp2;
        a3 += tmp3;
    }
    cout << a1 << " " << a2 << " " << a3 << " " << a1 + a2 + a3;
}
