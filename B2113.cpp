#include <cstring>
#include <iostream>

using namespace std;

char s[200];

int main() {
    cin.getline(s, 200);
    int length = strlen(s);
    for (int i = 0; i < length; i++) {
        cout << char(s[i] + s[(i + 1) % length]);
    }
}
