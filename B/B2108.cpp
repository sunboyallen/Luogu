#include <cmath>
#include <iostream>

using namespace std;

double A[200][200];
double B[200][200];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
            B[i][j] = A[i][j];
        }
    }
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < m - 1; j++) {
            B[i][j] = (A[i - 1][j] + A[i + 1][j] + A[i][j - 1] + A[i][j + 1] +
                       A[i][j]) /
                      5;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << round(B[i][j]) << " ";
        }
        cout << endl;
    }
}
