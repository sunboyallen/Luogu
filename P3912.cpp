#include <iostream>
using namespace std;

bool a[100000005];
int main()
{
    int i,n,j,s=1;
    cin>>n;
    if(n<2)
    {
        cout<<0;
        return 0;
    }
    for(i=3;i*i<=n;i+=2) //if i % 2 == 0 then pass
    {
        if(a[i]==0)
            for(j=i*i;j<=n;j+=i*2)
                a[j]=1;
    }
    for(i=3;i<=n;i=i+2) //just jishu
        s+=!a[i];
    cout<<s << endl;
}
