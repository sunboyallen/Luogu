#include <cstring>
#include <iostream>

using namespace std;

char str[256];

int main() {
    cin.getline(str, 256);
    int length = strlen(str);
    int ans = 0;
    for (int i = 0; i < length; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            ans++;
        }
    }
    cout << ans << endl;
}
