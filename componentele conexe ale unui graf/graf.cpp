#include <iostream>
#include <fstream>
using namespace std;

ifstream f("m.txt");


int c[100], a[100][100], viz[100], n, p, u,cox;

void bf(int start)
{
    viz[start] = 1;
    p = u = 1;
    c[p] = start;
    while (p <= u)
    {
        for(int i=1;i<=n;i++)
            if (viz[i] == 0 && a[c[p]][i] == 1)
            {
                viz[i] = 1;
                c[++u] = i;
            }
        p++;
    }
}

int main()
{
    f >> n;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f >> a[i][j];
    for (int i = 1; i <= n; i++)
    {
        if (viz[i] == 0)
            bf(i), cox++;
    }
    cout << cox;
}

