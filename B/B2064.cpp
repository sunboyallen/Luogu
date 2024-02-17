#include <iostream>

using namespace std;

long long Fib[33];

int main() {
    Fib[1] = 1;
    Fib[2] = 1;
    for (int i = 3; i <= 32; i++) {
        Fib[i] = Fib[i - 1] + Fib[i - 2];
    }
    int n;
    cin >> n;
    while (n--) {
        int num;
        cin >> num;
        cout << Fib[num] << endl;
    }
}
