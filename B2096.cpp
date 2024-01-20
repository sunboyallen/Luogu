#include <iostream>

using namespace std;

// int a[200000];

int freq[200000];

int main() {
    int n;
    cin >> n;
    int Fmax = 0;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        freq[tmp]++;
        if (tmp > Fmax) {
            Fmax = tmp;
        }
    }
    for (int i = 0; i <= Fmax; i++) {
        cout << freq[i] << endl;
    }

}
