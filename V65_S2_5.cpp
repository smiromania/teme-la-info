#include <iostream>
using namespace std;
int main()
{
    int m, n,a[25][25],i=1,j=1,k=0;
    cin >> n >> m;
    while (i < n + 1)
    {
        if (j == m + 1)
        {
            i++;
            j = m;
        }
        if (j == 0)
        {
            i++;
            j = 1;
        }
        if (i % 2)
        {
            a[i][j] = ++k;
            j++;

        }
        else {
            a[i][j] = ++k;
            j--;

        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
            
}
