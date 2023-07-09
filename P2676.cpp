#include <iostream>
using namespace std;

long long a[100000];
void quick_sort(int begin, int end){
    if(end <= begin)
        return;
    long long temp = a[begin];
    long long i = begin, j = end;
    while(i < j){
        while(a[j] >= temp && j > i)
            j--;
        while(a[i] <= temp && i < j)
            i++;
        if(i < j)
            swap(a[i], a[j]);
    }
    a[begin] = a[i];
    a[i] = temp;
    quick_sort(begin, i-1);
    quick_sort(i+1, end);
    return;
}
int main()
{
    long long n, b;
    cin >> n >> b;
    for (int i = 0; i < n; i++)
    cin >> a[i];
    
    quick_sort(0, n-1);
    int ans = 0;
    long long kk = 0;
    for (int i = n-1;i >= 0; i--)
    {
        kk += a[i];
        ans++;
        if (kk >= b)
        break;
        
    }
    cout << ans << endl;
}
