#include <cstring>
#include <iostream>

using namespace std;

char str[100];

int main() {
    cin >> str;
    int length = strlen(str);
    for (int i = length - 1; i >= 0; i--) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A';
            str[i] = (str[i] + 3) % 26;
            str[i] = str[i] + 'a';
            cout << str[i];
        } else {
            str[i] = str[i] - 'a';
            str[i] = (str[i] + 3) % 26;
            str[i] = str[i] + 'A';
            cout << str[i];
        }
    }
}
