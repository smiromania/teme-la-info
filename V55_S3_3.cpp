#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int cifre(long a, long& b)
{
    b = 0;
    int m[] = { 0,0,0,0,0,0,0,0,0,0 };
    while (a)
    {
        m[a % 10]++;
        a = a / 10;
    }
    int ok = 1;
    for(int i=1;i<=9;i++)
        if (m[i])
        {
            b = b * 10 + i;
            if (ok)
            {
                if(m[0])
                b = b * 10;
                ok = 0;
            }
        }
    return b;
}

int main()
{
    long n,x,ok=0,y;
    f >> n;
    for (int i = 1; i <= n; i++)
    {
        f >> x;
        cifre(x, y);
        
        if (x == y)
        {
            cout << x << " ";
            ok = 1;
        }
    }
    if (ok == 0)
        cout << "0";
}
