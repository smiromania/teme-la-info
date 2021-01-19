#include <iostream>
using namespace std;
int sfx(long long x)
{
    for (int i = 1; i <= 2; i++)
    {
        if (x % 10 >= x / 10 % 10)
            return 0;
        x = x / 10;
    }
    return 1;
}
int main()
{
    long long n;
    bool ok = true;
    cin >> n;
    for (int i = 1; i <= 4; i++)
    {
        if (!sfx(n))
            ok = false;
        n = n / 10;
    }
    if (ok)
        cout << "Da";
    else cout << "Nu";
}
