#include <cstring>
#include <iostream>

using namespace std;

int main() {
    char str[40];
    cin >> str;
    int length = strlen(str);
    if (str[length - 1] == 'r' && str[length - 2] == 'e') {
        for (int i = 0; i < length - 2; i++) {
            cout << str[i];
        }
    } else if (str[length - 1] == 'y' && str[length - 2] == 'l') {
        for (int i = 0; i < length - 2; i++) {
            cout << str[i];
        }
    } else if (str[length - 1] == 'g' && str[length - 2] == 'n' &&
               str[length - 3] == 'i') {
        for (int i = 0; i < length - 3; i++) {
            cout << str[i];
        }
    } else {
        cout << str;
    }
}
