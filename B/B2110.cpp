#include <cstring>
#include <iostream>

using namespace std;

char str[1200];
int num[200];

int main() {
    cin >> str;
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        num[str[i]]++;
    }
    for (int i = 0; i < length; i++) {
        if (num[str[i]] == 1) {
            cout << str[i];
            return 0;
        }
    }
    cout << "no" << endl;
}
