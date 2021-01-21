#include <iostream>
using namespace std;

int calcul(int n, long a[10001])
{
    int k = 0;
    for (int i = 1; i <= n; i++)
    {
        int ok = 1;
        for (int j = 2; j <= a[i] / 2; j++)
            if (a[i] % j == 0)
                ok = 0;
        if (ok) k++;
    }return k;
}

int main()
{
    long a[10] = { 0,12,37,43,6,71 };
    cout << calcul(5, a);
}

