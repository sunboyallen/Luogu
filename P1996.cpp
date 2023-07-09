#include <iostream>
using namespace std;


bool nothere[103];

int main()
{
    int n,m;
    cin >> n >> m;
    int ans = 0;
    int p = 0;
    while (ans < n)
    {
    for (int i = 0; i < m; i++)
    {
        p++;
        while (nothere[p]==1)
        p++;
        
        if (p > n)
        p = p - n;
        while (nothere[p]==1)
        p++;
        
    }
        cout << p << " ";
        nothere[p] =1;
        ans++;
    }
}
