#include <iostream>
#include <fstream>
using namespace std;
ifstream f("mat.txt");
int main()
{
    int m, n, a[25][25],x;
    m = 3, n = 4,x=2;
    //cin>>m>>n>>x;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            f >> a[i][j];
    for (int i = x; i < m; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] = a[i + 1][j];
    for (int j = 1; j <= n; j++)
        a[m][j] = 0;
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        if(i!=m-1)cout << endl;
    }

}
