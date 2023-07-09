#include<iostream>
using namespace std;

int n,a[10005],ans;//

int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
        if(a[i-1]>a[i]){
            while(a[i]>=a[i+1] and i<n-1) 
            i++;
            if(i!=n-1)
            ans++;
        }
    cout<<ans; 
    return 0;
}
