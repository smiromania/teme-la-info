#include <iostream>
using namespace std;

void calcul(long n, long &x)
{
    x = 0;
    while (n)
    {
        if (n % 2 == 0)
            x = x * 10 + n % 10;
        n = n / 10;
    }
}

int main()
{
    long x;
    calcul(9278, x);
    cout << x;
}

