#include <cstring>
#include <iostream>

using namespace std;

char str[20000];

int main() {
    cin.getline(str, 20000);
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if ((str[i] >= 'B' && str[i] <= 'Z') ||
            (str[i] >= 'b' && str[i] <= 'z')) {
            cout << char(str[i] - 1);
        } else if (str[i] == 'a') {
            cout << 'z';
        } else if (str[i] == 'A') {
            cout << 'Z';
        } else {
            cout << str[i];
        }
    }
}
