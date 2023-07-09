#include <iostream>
#include <iomanip>
using namespace std;

double a[110][3];

void quick_sort(int begin,int end){
    if(end<=begin)
        return;
    double temp=a[begin][2];
    int i=begin,j=end;
    while(i<j){
        while(a[j][2]>=temp&&j>i)
            j--;
        while(a[i][2]<=temp&&i<j)
            i++;
        if(i<j)
            swap(a[i],a[j]);
    }
    a[begin][2]=a[i][2];
    a[i][2]=temp;
    swap(a[i][0], a[begin][0]);
    swap(a[i][1], a[begin][1]);
    quick_sort(begin,i-1);
    quick_sort(i+1,end);
    return;
}

    double ans = 0;
    
int main()
{
    double n,t;
    cin >> n >> t;
    for (int i = 0; i < n; i++){
        cin >> a[i][0] >> a[i][1];
        a[i][2] = a[i][1] / a[i][0];
    }
    
    quick_sort(0,n-1);
    
    for (int i = n-1; i >= 0 and t > 0; i--)
    {
        if (t >= a[i][0])
        {
            t -= a[i][0];
            ans += a[i][1];
            continue;
        }
        else
        {
            ans += t * a[i][2];
            t = 0;
            break;
        }
    }
    printf("%.2lf",ans);
    
}
