#include <iostream>
using namespace std;
int a[16][16];
int main()
{
    int n;
    cin >> n;
    int i;
    for (i = 1; i <= n; i++)
        a[n][i] = i;
    for (i = n - 1; i > 0; i--)
        for (int j = 1; j <= n; j++)
            if (i >= j)
                a[i][j] = a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1];
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

}
