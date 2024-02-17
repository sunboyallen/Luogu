#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    while (n--) {
        string str;
        double tmp;
        int flag;
        cin >> str >> tmp >> flag;
        if (tmp >= 37.5 && flag == 1) {
            cout << str << endl;
            sum++;
        }
    }
    cout << sum << endl;
}
