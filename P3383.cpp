#include <iostream>
using namespace std;

bool notprime[120000000];
int prime[1200000];
void sieve(int x)
{
    int n = 0;
    notprime[1] = 1;
    notprime[2] = 0;
    for (int i = 1; i <= x; i++)
    {
        if (!notprime[i])
            prime[++n] = i;
        for (int j = 1; j <= n && i * prime[j] <= x; j++)
        {
            notprime[i * prime[j]] = 1;
            if (i % prime[j] == 0)
                break;
        }
    }
}

int main()
{
    int x, q;
    scanf("%d %d", &x, &q);
    sieve(x);
    while (q--)
    {
        int k;
        scanf("%d", &k);
        printf("%d\n", prime[k]);
    }
    return 0;
    
}
