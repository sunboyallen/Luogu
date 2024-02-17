#include <iostream>

using namespace std;

int max_num;
string max_name;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string name;
        int num;
        cin >> num >> name;
        if (num > max_num) {
            max_num = num;
            max_name = name;
        }
    }
    cout << max_name;
}
