#include <iostream>
using namespace std;

int a[105];
int b[105];

int main()
{
    int x;
    cin >> x;
    for(int i = 0; i < x; i++)
    cin >> a[i];
    
    for(int i = 0; i < x; i++)
    b[i]=0;
    
    
    for (int i = 0; i < x ; i++)
    for (int j = 0; j <=i; j++)
    {
    if (a[i-j] < a[i])
    b[i]++;
}
    for (int i = 0; i < x; i++)
    cout << b[i] << " ";
    return 0;
    
    
}
