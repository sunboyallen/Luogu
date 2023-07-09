#include <iostream>
using namespace std;

char name[110][30];
int nian[110];
int yue[110];
int ri[110];
bool xuan[110];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <n; i++)
    cin >> name[i] >> nian[i] >> yue[i] >> ri[i];
    
    
    for (int i = 0; i < n; i++)
    {
        int zuida = 0;
        while (xuan[zuida])
        zuida++;
        for (int j = zuida+1; j < n; j++)
        {
            if (xuan[j])
                continue;
            if (nian[j] < nian[zuida])
            {
                zuida = j;
                continue;
            }
            if (nian[j] == nian[zuida] and yue[j] < yue[zuida])
            {
                zuida = j;
                continue;
            }
            if(nian[j] == nian[zuida] and yue[j] == yue[zuida] and ri[j] < ri[zuida])
            {
                zuida = j;
                continue;
            }
            if(nian[j] == nian[zuida] and yue[j] == yue[zuida] and ri[j] == ri[zuida])
            {
                zuida = j;
                continue;
            }
        }
        xuan[zuida] = 1;
        cout << name[zuida] << endl;
    }
    
}
