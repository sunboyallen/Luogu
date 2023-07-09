#include <iostream>
#include <cstring>
using namespace std;

int f[100000000], w[50000], v[50000];
int main()
{
    int c, n;
    cin >> c >> n;
    for(int i = 1; i <= n; i++)
        cin >> w[i] >> v[i];
    for(int i = 1; i <= n; i++)
        for(int j = c; j >= w[i]; j--)
            f[j] = max(f[j], f[j-w[i]]+w[i] * v[i]);
    cout << f[c];
}
