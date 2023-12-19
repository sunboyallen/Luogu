#include <iostream>

using namespace std;

int main() {
    int k;
    cin >> k;
    int times1 = 0;
    int times5 = 0;
    int times10 = 0;
    while (k--) {
        int num;
        cin >> num;
        if (num == 1) {
            times1++;
        } else if (num == 5) {
            times5++;
        } else if (num == 10) {
            times10++;
        }
    }
    cout << times1 << endl;
    cout << times5 << endl;
    cout << times10 << endl;

}
