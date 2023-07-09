#include <iostream>
#include <cstring>
using namespace std;

char a[7000];
char b[7000];
int a1[10003];
int b1[10003];
int c[10003];

int main()
{
    cin >> a >> b;
    int la = strlen(a);
    int lb = strlen(b);
    for (int i = 0; i < la; i++)
        a1[i] = a[la-i-1] - '0';
    
    for (int i = 0; i < lb; i++)
        b1[i] = b[lb-i-1] - '0';
    
    int n = max(la,lb);
    for (int i = 0; i < n; i++)
        c[i] = a1[i] + b1[i];
    for (int i = 0; i < n; i++)
    {
        c[i+1] += c[i] / 10;
        c[i] %= 10;
    }
    if (c[n])
        n++;
    for (int i = n - 1; i >= 0; i--)
        cout << c[i];
    cout << endl;
    
}
