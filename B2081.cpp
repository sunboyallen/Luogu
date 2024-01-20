#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    while (n > 0) {
        if (n % 7 != 0 && n % 10 != 7 && n / 10 != 7) {
            sum += n * n;
        }
        n--;
    }
    cout << sum << endl;
}
