#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    if (N > 0) {
        cout << "positive" << endl;
    } else if (N < 0) {
        cout << "negative" << endl;
    } else {
        cout << "zero" << endl;
    }
}
