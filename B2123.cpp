#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    char c = str[0];
    int cnt = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == c) {
            cnt++;
        } else {
            cout << cnt << c;
            c = str[i];
            cnt = 1;
        }
    }
    cout << cnt << c;
}
