#include <iostream>
using namespace std;

int cmmdc(long a, long b)
{
    while (a != b)
        if (a > b)
            a = a - b;
        else b = b - a;
    return a;
}

int main()
{
    long a, b, n,k=0;
    cin >> n;
    for (a = 2; a < n; a++)
        for (b = a + 1; b <= n; b++)
            if (cmmdc(a, b) == 1)
                k++;
    cout << k;

}
