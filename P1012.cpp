#include <iostream>
#include <cstring>
using namespace std;

char num[22][12];

bool bigger(char *a, char *b)
{
    int la = strlen(a);
    int lb = strlen(b);
    for(int i = 0; i < min(la, lb); i++)
    {
        if(a[i] > b[i])
            return true;
        else if(a[i] < b[i])
            return false;
    }

    if(la > lb)
    {
        if(a[lb] > a[0])
            return true;
        else
            return false;
    }
    else
    {
        if(b[la] > a[0])
            return false;
        else
            return true;
    }
}

int main()
{
    int a;
    cin >> a;
    for(int i = 0; i < a; i++)
        cin >> num[i];
    
    for(int i = a - 1; i >= 0; i--)
        for(int j = 0; j < i; j++)
            if(bigger(num[i], num[j]))
                swap(num[i], num[j]);
        
    for(int i = 0; i < a; i++)
        cout << num[i];
    
}
