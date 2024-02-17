#include <iostream>

using namespace std;

int main() {
    long long N;
    scanf("%d", &N);
    while (N != 1) {
        cout << N;
        if (N % 2 == 0) {
            cout << "/2=";
            N /= 2;
        } else {
            cout << "*3+1=";
            N = 3 * N + 1;
        }
        cout << N << endl;
    }
    cout << "End" << endl;
}
