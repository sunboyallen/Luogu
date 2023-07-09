#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    return b==0 ? a : gcd(b, a % b);
}

int main()
{
    int x0, y0;
    cin >> x0 >> y0;
    int a = x0, b = y0;
    long long total = x0 * y0;
    int ans = 0;

    while(a <= y0)
    {
        if(total % a == 0)
        {
            b = total / a;
            if(gcd(a, b) == x0)
                ans++;
        }
        a += x0;
    }

    cout << ans;

}
