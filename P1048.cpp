#include <iostream>
using namespace std;

int shijian[120];
int jiazhi[120];

int dp[120][1200];


int main()
{
    int T, N;
    cin >> T >> N;
    for (int i = 1; i <= N; i++)
    cin >> shijian[i] >> jiazhi[i];
    for (int i = 1; i <= N; i++)
        for (int j = T; j >= 0; j--)
        {
            if (j >= shijian[i])
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-shijian[i]]+jiazhi[i]);
            else
                dp[i][j] = dp[i-1][j];
        }
    
    cout << dp[N][T] <<  endl;
                
    
    
}
