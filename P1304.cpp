#include <iostream>
using namespace std;

bool notprime[20000];

int a[20000][2];

int main()
{
    notprime[1] = 1;
    notprime[2] = 0;
    for (int i = 2; i < 12000; i++)
        if (notprime[i] == 0)
            for (int j = 2; i * j < 12000; j++)
                notprime[i * j] = 1;
    
    int n;
    cin >> n;
    
    
    a[4][0] = 2;
    a[4][1] = 2;
    cout << "4=2+2" << endl;
    if (n >= 6)
    for (int i = 6; i <= n; i = i + 2)
    {
        a[i][1] = i - 3;
        a[i][0] = 3;
        while (notprime[a[i][1]] or notprime[a[i][0]])
        {
            a[i][1] -= 2;
            a[i][0] += 2;
        }
        
        a[i][0] = i - a[i][1];
        
        cout << i  <<"=" << a[i][0] << "+" << a[i][1] << endl;
    }
    
    
    
}
