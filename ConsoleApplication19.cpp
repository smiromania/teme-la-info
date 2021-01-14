#include <iostream>
#include <cstring>
using namespace std;

char a[256],b[256],maxim;

int main()
{
    cin.get(b, 51);
    for (int i = 0; i < strlen(b); i++)
    {
        if (b[i] >= 'a' && b[i] <= 'z')
        {
            a[b[i]]++;
            if (a[b[i]] > maxim)
                maxim = a[b[i]];
        }
    }
    if (maxim == 0)
        cout << "nu";
    else
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (a[i] == maxim)
        {
            cout << (char)i;
            i = 'z' + 1;
        }
    }
}

