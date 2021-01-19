#include <iostream>
using namespace std;

int verif(long x)
{
    int a, b, c;
    c = x % 10;
    x = x / 10;
    b = x % 10;
    x = x / 10;
    while (x)
    {
        a = x % 10;
        if (a % 2)
            if (b % 2)
                if (c % 2)
                    return 1;
        c = b;
        b = a;
        x = x / 10;
    }
    return 0;
}

int main()
{
    long n;
    cin >> n;
    if (verif(n / 1000))
        cout << "Da";
    else cout << "Nu";
}
