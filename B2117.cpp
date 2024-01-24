#include <cstring>
#include <iostream>

using namespace std;

char str[30];

int main() {
    int n;
    cin >> n;
    while (n--) {
        cin >> str;
        int length = strlen(str);
        for (int i = 0; i < length; i++) {
            if (i == 0) {
                if (str[i] >= 'a' && str[i] <= 'z') {
                    str[i] += 'A' - 'a';
                }
            } else {
                if (str[i] >= 'A' && str[i] <= 'Z') {
                    str[i] += 'a' - 'A';
                }
            }
        }
        cout << str << endl;
    }
}
