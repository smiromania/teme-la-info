#include <iostream>
using namespace std;
int calcul(long n, int k)
{
    int ok = 0;
    while (n)
    {
        ok++;
        if (ok == k)
            return n % 10;
        n = n / 10;
    }
    return -1;
}
int main()
{
    long n,copyn;
    int i=0, ok = 1;
    cin >> n;
    copyn = n;
while (copyn)
    {
        if (calcul(n, ++i)>i)
            ok = 0;
        copyn /= 10;
    }
    if (ok)
        cout << "da";
    else cout << "nu";
}
