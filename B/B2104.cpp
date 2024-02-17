#include <iostream>

using namespace std;

int A[200][200];
int B[200][200];

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] + B[i][j] << " ";
        }
        cout << endl;
    }
}
