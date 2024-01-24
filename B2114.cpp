#include <cstring>
#include <iostream>

using namespace std;

char str[300];

int main() {
    cin >> str;
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] == 'A') {
            cout << 'T';
        } else if (str[i] == 'T') {
            cout << 'A';
        } else if (str[i] == 'C') {
            cout << 'G';
        } else if (str[i] == 'G') {
            cout << 'C';
        }
    }
}