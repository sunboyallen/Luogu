#include <iostream>

using namespace std;

int A[200][200];
int B[200][200];
int C[200][200];

int main() {
    int m, n, k;
    cin >> m >> n >> k;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < k; j++)
            cin >> B[i][j];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < k; j++)
            for (int l = 0; l < n; l++)
                C[i][j] += A[i][l] * B[l][j];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}
