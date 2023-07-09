#include <iostream>
using namespace std;

bool notprime[10200];
int factor[10200];

void chai(int n)
{
    if (notprime[n]  == 0)
    {
        factor[n]++;
        return;
    }
    if (n == 1)
    return;
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0 && n != 1)
        {
            n /= i;
            factor[i]++;
        }
    }
    return;
}


int main()
{
    notprime[1] = 1;
    notprime[2] = 0;
    for (int i = 2; i <= 10200; i++)
        if (!notprime[i])
            for (int j = 2; j * i <= 10200; j++)
                notprime[j * i] = 1;
    
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    chai(i);
    //chai(n);
    for (int i = 2; i <= n; i++)
    {
        if (factor[i] > 0)
        cout << i << " " << factor[i] << endl;
    }
    
    
}
