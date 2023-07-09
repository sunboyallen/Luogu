#include <iostream>
using namespace std;

int a[20];

int main()
{
    for(int i = 0; i < 10; i++)
        cin >> a[i];

    int n;
    cin >> n;
    
    int ans = 0;
    
    for(int i = 0; i < 10; i++)
        if(a[i] <= n + 30)
            ans++;
    
    cout << ans;
}
