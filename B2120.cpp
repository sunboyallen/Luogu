#include <cstring>
#include <iostream>

using namespace std;

char str[2000];

int main() {
    cin.getline(str, 2000);
    int ans = 0;
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] != ' ') {
            ans++;
        } else {
            if (ans != 0)
                cout << ans << ",";
            ans = 0;
        }
    }
    cout << ans;
}
