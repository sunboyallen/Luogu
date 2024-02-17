#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    int i = 0, j = str.length() - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            cout << "no";
            return 0;
        }
        i++;
        j--;
    }
    cout << "yes";
}
