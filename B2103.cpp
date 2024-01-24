#include <iostream>

using namespace std;

int a[200][200];
int b[200][200];

int main() {
    double m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> b[i][j];

    double ans = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] == b[i][j])
                ans++;

    printf("%.2f\n", ans * 100 / (m * n));
}
