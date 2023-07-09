#include <iostream>
#include <cstring>
using namespace std;

char a[6000];

int main()
{
    cin >> a;
    long long t;
    cin >> t;
    int t0 = t % strlen(a);
    long long n = t / strlen(a);
    int x = 0;
    int y = 0;
    
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == 'E')
            x++;
        if (a[i] == 'W')
            x--;
        if (a[i] == 'N')
            y++;
        if (a[i] == 'S')
            y--;
    }
    int dx = x;
    int dy = y;
    
    x = 0;
    y = 0;
    
    x += n * dx;
    y += n * dy;
    
    for (int i = 0; i < t0; i++)
    {
        if (a[i] == 'E')
            x++;
        if (a[i] == 'W')
            x--;
        if (a[i] == 'N')
            y++;
        if (a[i] == 'S')
            y--;
    }
    
    
    cout << x << " " << y << endl;
}
