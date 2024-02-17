#include <cstring>
#include <iostream>

using namespace std;

char s1[30];
char s2[30];

int main() {
    cin >> s1 >> s2;
    if (strstr(s2, s1) != NULL) {
        cout << s1 << " is substring of " << s2 << endl;
    } else if (strstr(s1, s2) != NULL) {
        cout << s2 << " is substring of " << s1 << endl;
    } else {
        cout << "No substring" << endl;
    }
}
