#include <iostream>
using namespace std;

char a[100];



int main()
{
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int t;
    cin >> t;
    int move = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        if (x1 > x2 and a[i] == 'W')
        {
            move++;
            x1--;
        }
        if (x1 < x2 and a[i] == 'E')
        {
            move++;
            x1++;
        }
        if (y1 > y2 and a[i] == 'S')
        {
            move++;
            y1--;
        }
        
        if (y1 < y2 and a[i] == 'N')
        {
            move++;
            y1++;
        }
    }
    if (x1 != x2 || y1 != y2)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << move << endl;
    return 0;
    
    
    
}
