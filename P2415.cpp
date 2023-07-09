#include<cstdio>
#include<sstream>///istringstream的头文件
#include<iostream>
#include<cstring>
#include <cmath>
using namespace std;

long long a[3000];

int main()
{

    
        string str;
        int cnt=0;
        getline(cin,str);///按行读入
        istringstream ist(str);//从string对象中读取空格，换行符分隔的字符
        while(ist>>a[cnt])
            cnt++;
    
    long long ans = 0;
    for (int i = 0; i < cnt; i++)
    ans += a[i] ;
    
    ans = ans * (long long)pow(2,cnt-1);
    
    cout << ans << endl;
    
    return 0;
}

