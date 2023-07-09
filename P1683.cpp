#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n,m;
int ans=0;//答案
char a[21][21];//字符矩阵
bool b[21][21];//标志数组
inline void dfs(int x,int y)//dfs
{
    if (x<1||x>m||y<1||y>n||a[x][y]=='#'|b[x][y]==false) return;//判断是否越界
    b[x][y]=false;//false表示该点走过了
    ans++;//答案加一
    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x,y+1);
    dfs(x,y-1);//向四个方向搜索
}

int main()
{
    cin>>n>>m;
    int p,q;//用来记录@，起点
    for (int i=1;i<=m;i++)
     for (int j=1;j<=n;j++) 
      {
        cin>>a[i][j];//读入
        b[i][j]=true;//一开始都可以走
        if (a[i][j]=='@')  {p=i; q=j;}
      }
    dfs(p,q);
    cout<<ans;
    return 0;
}
