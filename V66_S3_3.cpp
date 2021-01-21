#include <iostream>
using namespace std;
int calcul(int n, long a[10001])
{
    long c = a[1];
    for (int i = 2; i <= n; i++)
    {
        long x = c,y=a[i];
        while (x != y)
            if (x > y)
                x = x - y;
            else
                y = y -x;
        c = x;

    }
    return c;
}


int main()
{
    int n = 5;long a[] = { 0,12,36,48,6,60 };
    cout << calcul(n, a);
}

