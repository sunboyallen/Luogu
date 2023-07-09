#include <iostream>
#include <cstring>
#include <sstream>
#include <iomanip>
using namespace std;
int main()
{
    const int MAXX = 103;
    int a[MAXX][MAXX];
    
    double b[MAXX];
    
    double m, n;
    
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for(int j  = 0; j < n; j++)
            cin >> a[i][j];
            
    for(int i = 0; i < m; i++)
    {
        for(int j = n-1; j >= 0; j--)
            for (int k = 1; k <= j; k++)
                if (a[i][k] > a[i][k-1])
                    swap(a[i][k], a[i][k-1]);
        
        int sum = 0;
        for (int j = 1; j < n-1 ; j++)
        {
            sum = sum + a[i][j];
        }
        b[i] = sum / (n - 2);
    }
    
//	for (int i = 0; i < m; i++)
//	for (int j = 0; j < n; j++)
//	cout << a[i][j] << endl;
    
    double maxx = b[0];
    for (int i = 0; i < m; i++)
    maxx = max(maxx, b[i]);
    
    cout <<fixed<< setprecision(2) <<maxx << endl;
    
    
    
    
    return 0;
     
}
