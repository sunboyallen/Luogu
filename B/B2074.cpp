#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    long long sum = 1;
    a %= 7;
    while (b > 0) {
        if (b % 2 == 1) {
            sum = (sum * a) % 7;
        }
        b /= 2;
        a = (a * a) % 7;
    }
    if (sum == 0) {
        cout << "Sunday" << endl;
    } else if (sum == 1) {
        cout << "Monday" << endl;
    } else if (sum == 2) {
        cout << "Tuesday" << endl;
    } else if (sum == 3) {
        cout << "Wednesday" << endl;
    } else if (sum == 4) {
        cout << "Thursday" << endl;
    } else if (sum == 5) {
        cout << "Friday" << endl;
    } else if (sum == 6) {
        cout << "Saturday" << endl;
    }
}
