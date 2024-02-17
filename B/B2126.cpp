#include <iostream>

using namespace std;

int main() {
    int k;
    cin >> k;
    string str;
    cin >> str;
    char c = str[0];
    int cnt = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == c) {
            cnt++;
        } else {
            c = str[i];
            cnt = 1;
        }
        if (cnt >= k) {
            cout << c;
            return 0;
        }
    }
    cout << "No";
}
