#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        char num[5];
        cin >> num;
        if ((num[3] - '0') - (num[0] - '0') - (num[1] - '0') - (num[2] - '0') >
            0) {
            count++;
        }
    }
    cout << count << endl;
}
