#include <iostream>
#include <fstream>
using namespace std;
ifstream f("matrice.txt");

int main()
{
    int ok = 0, prod = 1, m, n, a[51][51],i,j;
    m = 4, n = 4;
    //cin >> m >> n;
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
        {
            f >> a[i][j];
            if (i % 2 == 0 && j % 2 && a[i][j] > 0)
            {
                prod = ((prod%10)* (a[i][j]%10))%10,
                    ok = 1;
            }
        }
    if (ok)
        cout << prod;
    else cout << "NU EXISTA";
}
