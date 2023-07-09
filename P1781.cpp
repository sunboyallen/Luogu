#include <iostream>
#include <cstring>

using namespace std;

char aa[22][122];

bool bigger(char *a, char *b)
{
    if(strlen(a) != strlen(b))
        return strlen(a) > strlen(b);
    
    for(int i = 0; i < strlen(a); i++)
    {
        if(a[i] != b[i])
            return (int)a[i] > (int)b[i];
    }
    
}

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    cin >> aa[i];
    
    int maxx = 1;
    for(int i = 1; i <=n; i++)
    {
        if(bigger(aa[i],aa[maxx]))
            maxx = i;
    }
    cout << maxx << endl;
    cout << aa[maxx] << endl;
}
