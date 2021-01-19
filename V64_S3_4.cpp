#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int main()
{
    long a[1001], x, y;
    int n, i, poz, l, lmax = 0;
    f >> x;
    a[1] = x;
    n = 1;
    l = 1;
    while (f >> y) {
        a[++n] = y;
        if (x > y)
            l++;
        else {
            if (l > lmax) {
                lmax = l;
                poz = n - 1;
            }
            l = 1;
        }
        x = y;
    }
    for (i = poz - lmax + 1; i <= poz; i++)
        cout << a[i] << " ";
}