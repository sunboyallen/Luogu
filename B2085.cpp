#include <iostream>

using namespace std;

int prime[1000000];

bool isPrime[3000000];

void sieve() {
    for (int i = 0; i < 2000000; i++) {
        isPrime[i] = true;
    }

    for (int p = 2; p * p <= 2000000; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= 2000000; i += p) {
                isPrime[i] = false;
            }
        }
    }
    int q = 0;
    for (int p = 2; p <= 2000000; p++) {
        if (isPrime[p]) {
            prime[q] = p;
            q++;
        }
    }
}

int main() {
    sieve();
    int n;
    cin >> n;
    cout << prime[n - 1];
}
