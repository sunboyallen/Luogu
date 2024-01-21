#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int max_length = 1;
    int previous = 0;
    int current_length = 0;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if (k == previous) {
            current_length++;
            if (current_length > max_length) {
                max_length = current_length;
            }
        } else {
            current_length = 1;
            previous = k;
        }
    }
    cout << max_length << endl;
}
